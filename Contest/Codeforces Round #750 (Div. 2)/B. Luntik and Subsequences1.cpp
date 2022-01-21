#include<bits/stdc++.h>
#define ll long long int
#define for0 for(ll i=0;i<n;i++)
#define for1 for(ll i=1;i<=n;i++)
#define itf it->first
#define its it->second
#define pb push_back
#define str string
#define con continue
#define tc ll t;cin>>t;while(t--)
using namespace std;
int main()
{

    tc
    {
        ll n,x,sum=0;
        cin>>n;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            sum+=x;
            mp[x]++;
        }
        if(mp[1]==0)
        {
            cout<<0<<endl;
        }
        else
        {
            ll res=pow(2,mp[0]);
            res--;
            if(sum==1)
                cout<<1+res<<endl;
            else
                cout<<(res*mp[1])+mp[1]<<endl;

        }
    }


}
