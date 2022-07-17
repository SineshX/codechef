#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void printArray(int arr[],int l,int r)
{
    for(int i = l ;i < r ;i++)
    {
        cout<<arr[i]<<"	";
    }
    cout<<endl;
}
void solve()
{
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    
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
