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
        ll n,x,k;cin>>n>>k;
        map<ll,ll>mp,check;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
           for(ll j=0;j<k;j++)
           {
               if(x%2)
                mp[j]++;
               else
                check[j]++;
               x/=2;
           }
        }
        ll ans=0;
        for(ll i=0;i<k;i++)
        {
            //cout<<mp[i]<<" "<<check[i]<<endl;
            if(mp[i]>check[i])
                ans+=pow(2,i);
        }
        cout<<ans<<endl;


    }
}
