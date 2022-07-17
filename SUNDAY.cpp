#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <  n ;i++)
    {
        cin>>arr[i];
    }
    int count = n;  
    for(int i = 0; i <  n ;i++)
    {
        switch (arr[i])
        {
        case 6:
        case 13:
        case 20:
        case 27:
        case 7:
        case 14:
        case 21:
        case 28:
            count--;
            break;
        default:
            break;
        }
    }
    cout<<count+8<<endl;

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
