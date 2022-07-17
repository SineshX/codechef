#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<unordered_map>

using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution 


void solve()
{
    int size; 
    string s;

    cin>>size;
    cin>>s;
    set<char> alpha = { 'a','e','i', 'o', 'u' };
    int count = 0;
    for(auto i : s) 
    {   
        if (alpha.find(i) == alpha.end())
        {
            count++;
            if (count >= 4)
            {
                cout<<"NO"<<endl;
                // break;
                return;
            }
        } 
        else count = 0;

    }
    cout<<"YES"<<endl;
    return;

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test=1;
cin>>test;
    while(test--) solve();
    return 0;
}
