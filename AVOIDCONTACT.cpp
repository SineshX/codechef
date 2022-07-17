#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;


void solve()
{   
    int x,y;

    cin>>x>>y;
    x = (x-y) + y*2;
    if( x == y)
    {
        cout<<x-1<<endl;
    }else{
        cout<<x<<endl;
    }
        
        

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
