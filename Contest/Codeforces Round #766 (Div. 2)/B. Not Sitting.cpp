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
        ll n,m;cin>>n>>m;
        vector<ll>v;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                ll mx=0;
                mx=max(mx,(abs(n-i)+abs(m-j)));
                mx=max(mx,(abs(1-i)+abs(1-j)));
                mx=max(mx,(abs(n-i)+abs(1-j)));
                mx=max(mx,(abs(1-i)+abs(m-j)));
                v.push_back(mx);
            }
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<n*m;i++)
            cout<<v[i]<<" ";
        cout<<endl;

    }
}
