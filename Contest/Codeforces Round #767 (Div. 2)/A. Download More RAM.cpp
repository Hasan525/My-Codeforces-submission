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
      ll n,k;cin>>n>>k;
      vector<pair<ll,ll> >v;
      ll b[n+1],a[n+1];
      for(ll i=0;i<n;i++)
        cin>>a[i];
      for(ll i=0;i<n;i++)
        cin>>b[i];
      for(ll i=0;i<n;i++)
        v.push_back(make_pair(a[i],b[i]));
      sort(v.begin(),v.end());
      for(ll i=0;i<n;i++)
      {
          if(k<v[i].first)
            break;
          else
            k+=v[i].second;
      }
      cout<<k<<endl;

    }
}
