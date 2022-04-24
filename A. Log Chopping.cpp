#include<iostream>
using namespace std;
int mov(int x)
{

    if(x<=1)
    {
        return 0;
    }
    if(x%2)
    {
        return 1+mov(x-1);
    }
    else
    {
        return 1+2*mov(x/2);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
        }
        int move=0;
        for(int i=0;i<n;i++)
        {
           move+=mov(a[i]);
        }
        //cout<<move<<endl;
        if(move%2)
        {
            cout<<"errorgorn\n";
        }
        else
        {
            cout<<"maomao90\n";
        }
    }
}
