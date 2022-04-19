#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n,m;
      cin>>n>>m;
      ll a[n];
      for(int i=0;i<n;i++)
      {

          cin>>a[i];
      }
      if(m-n<0)
      {
         cout<<"NO"<<endl;
      }
      else{
      sort(a,a+n);
       ll sum=a[n-1]*2;
      for(int i=1;i<n-1;i++)
      {
         sum+=a[i] ;
      }
      if(sum<=m-n)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
      }
    }
}
