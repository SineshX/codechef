#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for (int i = 0; s[i] != '\0'; i++) 
    {
 
        // Counting occurrences of s[i]
        int count = 1;
        while (s[i] == s[i + 1]) {
            i++;
            count++;
        }
        cout << s[i] << count;
    }

    //m2 
    cout <<endl;  
    int count = 1;
    int n = s.size();
    for(int i = 0; i <  n ;i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
        else{
            cout<<s[i]<<count;
            count = 1; //reset
        }
    }
    return 0;
}