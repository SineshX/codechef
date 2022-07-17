#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int arr[],int size)
{
    cout<<"Array :  ";
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<"	";
    }
    cout<<endl;
}
//actually its max k sum
int minKsum(int arr[],int n,int k)
{   
    int sum = arr[n];
    for(int i = n-1; k > 0 ;i++)
    {   
        if(arr[i] < arr[i+1])
        {
            sum += arr[i];
            k--;
        }
    }

    return sum;
}

void inputArray(int arr[],int n){
    for(int i = 0; i <  n ;i++)
    {
        cin>>arr[i];
    }
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr1[40],arr2[40];
        //take input 
        inputArray(arr1, n);
        inputArray(arr2, n);
    // sort reverse 
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);

        printArray(arr1,n);
        printArray(arr2,n);
        cout<<min(minKsum(arr1,n,k), minKsum(arr2,n,k))<<endl;
        // int min1,min2;
        // min1 = minKsum(arr1,n,k);
        // min2 = minKsum(arr2,n,k);
        // cout<<min1<<min2<<endl;


    }
	return 0;
}
