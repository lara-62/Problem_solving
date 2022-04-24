#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll a=0,b=0;
        int flag=0;
        if(s.length()==1)
        {
            cout<<"NO\n";
        }
        else if(s[0]!='A'||s[s.length()-1]!='B')
        {
            cout<<"No\n";
        }
        else{
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            if(s[i]=='B')
            {
                b++;
            }
            if(a<b)
            {
              flag=1;
              break;
            }
        }
        if(flag==1)
        {
        cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        }

    }
}
