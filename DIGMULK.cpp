#include<iostream>
#include<string>
#include<vector>
#include<sstream>  
// #include<unordered_map>
#define ll long long
#define mod 1000000007

using namespace std;


void solve()
{   
    int n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    // cout<<s;
    vector<int> v(10,0); // size 10 element 0 each
    // for (int i : v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    for (char ch : s)
    {
        v[(int)ch - 48]++;
        // wallah 
    }
    // vector<int> v2(v); // using default copy constructor 

    for (int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    for(int i = 0; i < m ;i++)
    {
        // m times doing operation
        vector<int> v2(v);
        for(int j = 0; j <  10 ;j++)
        {   
            if(v[j] != 0)
            {
                ll t = j * k;
                ostringstream str1;
                str1 << t;
                string s2= str1.str();
                // cout<<s2<<endl;
                //  ki range is 10^9
                //  sply t and push a/c
                v2[j]--;
                for (char ch : s2)
                {
                    v2[(int)ch - 48]++;
                    // wallah 
                }
                /* 
                if(t > 9) 
                {
                    v2[j]--;
                    v2[t%10]++;
                    v2[t/10]++;
                    // -- v hoga existing j ka ??
                }else{ // t < 10
                    v2[j]--;
                    v2[t]++;
                } */
            }
        }
        v = v2;
    }
    int sum = 0;
    for (int i : v){
        sum+=i;
        cout<<i<<" ";
    }
    // cout<<endl<<sum%mod<<endl;
    cout<<endl<<sum<<endl;

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
