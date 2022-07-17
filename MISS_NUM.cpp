#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() 
{
	
	int tc;
	cin>>tc;
	
	while(tc--)
	{
	   vector<int> v(4);
	   
	   for(int i=0;i<4;i++)
       {
           cin>>v[i];
       }
        int x ;
        int y ;
	   
	   int m = *min_element(v.begin(), v.end());
	   int flag = 0;
	   
	    v.erase(min_element(v.begin(), v.end()));
    	for(int i = 0; i < v.size(); i++)
    	{   
    	   if((m+v[i])%2 == 0)
    	   {    
    	       int x = (m+v[i])/2;
    	       int y = x - m;
    	    try
    	    {
    	        if(x*y == (m+v[i]))
    	        {
    	            flag = 1;
    	            break;
    	        }
    	    }
            catch(exception e)
            {
                continue;
            }
    	    
    	       
    	    cout<<"-1 -1"<<endl;
    	    break;
    	   }
    	}
    	if(flag == 0)
    	{
    	    cout<<"-1 -1"<<endl;
    	}
	    
	    
	    cout<<a<<b<<endl;
	}
	
	return 0;
}
