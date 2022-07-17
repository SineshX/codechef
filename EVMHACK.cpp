#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    vector<int> v(6);

    float sum = 0,p1=0;
    for(int i = 0; i < 6 ;i++)
    {
        cin>>v[i];
    }
    sum = v[3] + v[4] + v[5]; 
    
    sum = sum/2;

    p1 = v[0] + v[1] + v[2];



    if(p1 > sum ) 
    {   
        cout<<"YES"<<endl;
    }else if (v[3] + v[1] + v[2] > sum || v[0] + v[4] + v[2] > sum || v[0] + v[1] + v[5] > sum ){

        // int p2 = p1 + max({v[3] , v[4] , v[5]}) - min({v[0] , v[1] , v[2]});

        // if(p2 > sum )
        // {
            cout<<"YES"<<endl;
        // }else{
        // cout<<"NO"<<endl;

        // }

    }else{
        cout<<"NO"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
