#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll prefix[200005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll x;
        cin>>n>>x;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        for(int i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1]+a[i-1];
        }
        ll count=0;
        for(int i=1;i<=n;i++)
        {    if(prefix[i]<=x)
            count+=(x-prefix[i])/i+1;
        }
        cout<<count<<endl;
    }
}
