#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)


const ll mx = 1e5;
vector<ll>g[mx+5];
ll vis[mx+5];
map<pair<ll,ll>,ll>w;



void dfs(ll x, ll cnt, ll p)
{
    vis[x] = 1;
    for(ll i=0;i<g[x].size();i++)
    {
        if(vis[g[x][i]]==0 && p!=g[x][i])
        {
            ll y =0;
            if(cnt==2) y=3;
            else y=2;
            w[ {x,g[x][i]}] = y;
            w[ {g[x][i],x}] = y;
            //cout<<g[x][i]<<" "<<x<<" "<<w[ {g[x][i],x}]<<endl;
            dfs(g[x][i],y,x);
        }
    }
}






int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
        ll n;
        cin >> n;
        map<ll,ll>mp;
        bool flag =false;
        vector< pair<ll,ll> >v(n+5);
        for(ll i=1; i<n; i++)
        {
            ll x,y;
            cin >> x >>y;
            g[x].push_back(y);
            g[y].push_back(x);
            mp[x]++;
            mp[y]++;
            v[i] = {x,y};
            if(mp[x]>2 || mp[y]>2)
                flag=true;
        }


        if(flag)
            cout << -1 <<endl;
        else
        {
            ll s =0;
            for ( ll i=1; i<=n; i++) if(mp[i]==1) s = i;
            dfs(s,2,0);

            for ( int i=1; i<n; i++)
                cout << w[ {v[i].first,v[i].second}] <<" ";
            cout << endl;

        }
        memset(vis,0,sizeof(vis));
        for( ll i=1; i<=n; i++) g[i].clear();
        w.clear();


    }

}

