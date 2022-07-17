#include<iostream>
using namespace std;



// ********** MAIN FUNCTION *********** // 
int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        long long int x,a,b;
        
        cin>>x>>a>>b;


        if(x%a==0)
        {
            long long int p=x/a;
            long long int den=b*p;
            long long int sum=0;
            for(int i=1;i<=sqrtl(den);i++)
            {
                if(sum>x)
                break;
                if(den%i==0)
                {
                    sum=sum+i;
                    if(den/i!=i)
                    sum=sum+den/i;
                }
            }
            if(sum!=x)
            {
                cout<<-1<<"\n";
            }
            else
            cout<<den<<"\n";
        }
        else
        cout<<-1<<"\n";
    }
    cout<<endl;
    return 0;
}