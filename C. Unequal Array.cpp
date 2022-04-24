#include<iostream>
using namespace std;
typedef long long ll;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int first=0;
        int first_index=-1;
        int last_index=-1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                if(first==0)
                {
                    first_index=i+1;
                    first=1;
                }
                last_index=i;
            }
        }
        if(first_index>last_index)
        {
            cout<<0<<endl;
        }
        else if(first_index==last_index&&first_index!=-1)
        {
            cout<<1<<endl;
        }
        else
        {
        cout<<last_index-first_index<<endl;
        }
    }
}
