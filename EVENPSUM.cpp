#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a,b;
    cin>>a>>b;

    ll evena = a/2 ,evenb = b/2;
    ll odda = a/2, oddb = b/2;
    if(a&1 == 1)
    {
        //a is even 
        odda++;

    }
    if(b&1 == 1)
    {
        oddb++;
    }
    cout<<odda*oddb + evena*evenb<<endl;

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
