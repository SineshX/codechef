
#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    ll r = n%7;

    if (r == 6)
    {
        cout<<n/7 + 1<<endl;
    }
    else
    {
        cout<< n/7 <<endl;
    }


    
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
