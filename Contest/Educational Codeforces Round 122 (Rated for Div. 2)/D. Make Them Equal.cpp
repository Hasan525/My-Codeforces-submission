#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
const ll N=1e3+2;






int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    ll dp[N];
    memset(dp,1000000,sizeof(dp));
    dp[1]=0;
    for(ll i=1;i<N;i++)
    {
        for(ll j=1;j<=i;j++)
        {
            if(i+(i/j)<N)
            {
                dp[i+(i/j)]=min(dp[i+(i/j)],dp[i]+1);
            }
        }
    }

    tc
    {

        ll n,k;cin>>n>>k;
        ll b[n],w[n];
        for(ll i=0;i<n;i++)
            cin>>b[i];
        for(ll i=0;i<n;i++)
            cin>>w[i];
        k=min(k,12*n);
        ll ans[k+2]={0};
        for(ll i=0;i<n;i++)
        {
            for(ll j=k;j>=dp[b[i]];j--)
                ans[j]=max(ans[j],ans[j-dp[b[i]]]+w[i]);
        }
        cout<<ans[k]<<endl;

    }
}
