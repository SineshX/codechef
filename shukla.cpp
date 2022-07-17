#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, temp = 0, temp1 = 0, c;
    cin >> n;
    cout << n << endl;
    cout << n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << a[0] << endl;
    }
    else
    {
        temp = temp + a[0];
        temp1 = temp1 + a[n - 1];
        for (int i = 0, j = n - 1; i != j; i++, j--)
        {
            if (temp < temp1)
            {
                temp = temp + a[i + 1];
            }
            else
            {
                temp1 = temp1 + a[j - 1];
            }
            //c=max(temp,temp1);
        }
        c = max(temp, temp1);
        cout << c << endl;
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test = 1;
    cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
