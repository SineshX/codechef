#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007

//actually its max k sum
int minKsum(int arr[], int n, int k)
{
    int sum = arr[0];
    // cout<<n<<" "<<k<<endl;
    for (int i = 1; k > 1; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            sum += arr[i];
            k--;
        }
    }

    return sum;
}

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr1[40], arr2[40];
    //take input
    inputArray(arr1, n);
    inputArray(arr2, n);
    // sort reverse
    sort(arr1, arr1 + n , greater<>());
    sort(arr2, arr2 + n, greater<>());

    cout << min(minKsum(arr1, n, k), minKsum(arr2, n, k)) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
