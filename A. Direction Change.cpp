#include<iostream>
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
          if(n==1&&m!=1)
          {
              if(m==2)
              {
                  cout<<1<<endl;
              }
              else
              {
                  cout<<-1<<endl;
              }
          }
          else if(m==1&n!=1)
          {
             if(n==2)
              {
                  cout<<1<<endl;
              }
              else
              {
                  cout<<-1<<endl;
              }
          }
          else
          {
              ll x=min(n,m);
              ll y=max(n,m);
              ll z=y-x;
              ll ans=2*x-2;
              ans+=(z/2)*3+(z-(z/2));
              cout<<ans<<endl;

         }
      }
}
