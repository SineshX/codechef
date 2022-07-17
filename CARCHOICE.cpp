#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
#define EPSILON 0.0001   // Define your own tolerance
#define FLOAT_EQ(x,v) (((v - EPSILON) < x) && (x <( v + EPSILON)))
#define ll long long
#define mod 1000000007

void solve()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;

    
    float x = y1/x1;
    float y = y2/x2;
    
    if(x - y < 0)
    {   
        cout<<-1<<endl;
    }else if(x - y > 0)
    {
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
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
