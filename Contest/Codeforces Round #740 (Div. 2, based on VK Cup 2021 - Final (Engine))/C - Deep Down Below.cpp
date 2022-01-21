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
        ll n,x;cin>>n;
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i++)
        {
            ll k;cin>>k;
            ll mi=0;
            for(ll j=0;j<k;j++)
            {
                cin>>x;
                mi=max(mi,x-j+1);
            }
            v.push_back(make_pair(mi,k));
        }
        sort(v.begin(),v.end());
         ll sum=v[0].first+v[0].second;
        ll ans=v[0].first;
        for(ll i=1; i<v.size(); i++)
        {
            if(sum<=v[i].first)
            {
                ans+=(v[i].first-sum);
                sum+=(v[i].first-sum);
            }
            sum+=v[i].second;
        }
        cout<<ans<<endl;
    }



}


