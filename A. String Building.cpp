#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        string s;
        cin>>s;
        int m=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                m++;
            }
            else
            {  if(m<=1)
                 {
                   break;
                 }
                m=1;
            }
        }
        if(m==1)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    
}