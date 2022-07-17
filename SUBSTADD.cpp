#include <iostream>
#include <algorithm>
#include <vector>

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
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;

    int *a = new int(n);
    int *b = new int(n);




    for(int i = 0; i <  n ;i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i <  n ;i++)
    {
        cin>>b[i];
    }

    //sove
    for(int i = 0; i <  n ;i++)
    {
        if(b[i] - a[i] == x  )
        {
    
        }
        else if(b[i] - a[i] == y)
        {
        }else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

    //dont forget 
    delete[] a;
    delete[] b;

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
