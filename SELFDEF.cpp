#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i <  n ;i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0; i <  n ;i++)
    {
        if( arr[i] > 9 && arr[i] < 61)
        {
            count++;
        }
    }
    cout<<count<<endl;

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
