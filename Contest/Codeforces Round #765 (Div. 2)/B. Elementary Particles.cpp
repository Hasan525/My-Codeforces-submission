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
       ll n,x,a,b;cin>>n;
       map<ll,ll>mp;
       ll mi=INT_MAX;
       for(ll i=1;i<=n;i++)
       {
           cin>>x;
            if(mp[x])
            {
                if(mi>=i-mp[x])
                {
                    mi=i-mp[x];
                    a=mp[x];
                    b=i;
                }
            }
             mp[x]=i;
       }
       if(mi==INT_MAX)
       {
           cout<<-1<<endl;
           continue;
       }
       ll ans=n-b;
       ans+=(a-0);
       cout<<ans<<endl;

    }
}
