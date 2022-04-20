#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=1e19+7;
    for(int i=0;i<n;i++)
    {
        ll prev=0;
        ll sum=0;
        for(int j=i+1;j<n;j++)
        {
            prev+=a[j]-(prev%a[j]);
            sum+=prev/a[j];
        }
        prev=0;
        for(int j=i-1;j>=0;j--)
        {
            prev+=a[j]-(prev%a[j]);
            sum+=prev/a[j];
        }
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
}
