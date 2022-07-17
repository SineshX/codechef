#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;

    int profit = x*( z - y ) ; 
    cout<<profit<<endl;

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
