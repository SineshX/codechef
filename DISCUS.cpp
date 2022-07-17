#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int m = 0,x;
      cin>>x;
        m = max(m,x);
        cin>>x;
        m = max(m,x);
        cin>>x;
        m = max(m,x);
    cout<<m<<endl;
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
