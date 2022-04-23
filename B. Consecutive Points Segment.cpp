#include<iostream>
#include<map>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n];
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(int i=1;i<n;i++)
        {
            m[x[i]-x[i-1]]++;
        }
        int flag=0;
        for(auto i=m.begin();i!=m.end();i++)
        {
          if(i->first>3)
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
              if(m[3]!=0)
              {
                  if(m[3]==1&&m[2]==0)
                  {
                    cout<<"YES\n";
                  }
                  else
                  {
                      cout<<"NO\n";
                  }
              }
              else if(m[2]!=0)
              {
                  if(m[2]<=2)
                  {
                      cout<<"YES\n";
                  }
                  else
                  {
                      cout<<"NO\n";
                  }
              }
              else
              {
                  cout<<"YES\n";
              }

          }
        }
    }


