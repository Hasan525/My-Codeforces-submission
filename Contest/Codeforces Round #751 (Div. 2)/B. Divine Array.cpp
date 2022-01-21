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
        ll n;
        cin>>n;
        ll arr[n+5];
        for(ll i=1; i<=n; i++)
            cin>>arr[i];
        vector<ll>v[n+5];
        map<ll,ll>mp,check;
        ll k=0;
        for(ll i=1;i<=n;i++)
            v[k].push_back(arr[i]);
        for(k=1; ; k++)
        {
            bool flag=true;
            for(ll i=1; i<=n; i++)
            {
                mp[arr[i]]++;
            }
            for(ll i=1; i<=n; i++)
            {
                if(mp[arr[i]]!=check[arr[i]])
                    flag=false;
                check[arr[i]]=mp[arr[i]];
            }
            if(flag)
                break;
            for(ll i=1; i<=n; i++)
            {
                v[k].push_back(mp[arr[i]]);
                arr[i]=mp[arr[i]];
            }
            mp.clear();
        }
        ll q;
        cin>>q;
        ll x,y;
        while(q--)
        {
            cin>>x>>y;
            if(y>=k)
                cout<<v[k-1][x-1]<<endl;
            else
                cout<<v[y][x-1]<<endl;

        }


    }
}
