#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int x;
    cin>>x;
    x = (x * 3)  - 1 ;
    //sum should be x now 
    cout<<1<<" ";
    if (x%2 == 0)
    {
        cout<<(x/2)-1<<" "<<(x/2)+1<<endl;;
    }else{
        x = (int)(x/2);
        cout<<x<<" "<<x+1<<endl;;

    }

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
