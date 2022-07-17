#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{

// Chef really likes to compete on Codechef, and he has gained an impressive rating of X, where X>0. There is also a parallel universe, where ratings on Codechef are negative instead. The only thing that remains unchanged in the parallel universe is Chef's love for competing on Codechef. Chef's rating on Codechef in the parallel universe is Y, where Y<0.

// Due to some cosmic event, the parallel universe has been destroyed, resulting in Chef forgetting both X and Y. He only remembers the sum S=X+Y. He wonders what the maximum possible product of his ratings is, given that he knows the sum of his ratings.

   long long S;
	    
	   cin >> S;

       
	   if (S == 0)
	   {
	    cout<<-1<<endl;
	   }
	   else{
	       long int Y = S*S / 4 ;
    	   long int mul = -1*S*S/4 + S*S/2;
    	   
    	   cout << mul<<endl;
	   }


}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
