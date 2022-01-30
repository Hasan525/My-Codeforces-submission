#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)





int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
      ll n;cin>>n;
      n--;
      ll i=0;
      vector<ll>v;
      while(n>=i)
      {
          ll m=n;
          while(m%2==0 and m)
            m/=2;
          if(m==1 and n!=1 and n!=i)
          {
              v.push_back(n);
              v.push_back(i);
              i++;
          }
          else
            {
                v.push_back(n);
            }
          n--;
      }
      for(ll i=0;i<v.size();i++)
        cout<<v[i]<<" ";
      cout<<endl;
    }
}
