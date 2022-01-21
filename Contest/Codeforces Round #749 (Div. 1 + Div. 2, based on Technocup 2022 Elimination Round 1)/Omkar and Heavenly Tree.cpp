
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
        ll i,j,n,m,a,b,x;
        cin>>n>>m;
        bool ara[n+1];
        memset(ara,true,sizeof(ara));
        for(i=1;i<=m;i++)
        {
            cin>>a>>b>>x;
            ara[b]=false;
        }
        ll ans;
        for(i=1;i<=n;i++)
        {
            if(ara[i]==true)
            {
                ans=i;
                break;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(i==ans) continue;
            else cout<<ans<<" "<<i<<endl;
        }
    }

}
