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
        ll ans=0;
        ll cnt=1;
        while(cnt<=k and cnt<n)
        {
            ans++;
            cnt*=2;
        }
        n-=cnt;
        ans+=(n/k);
        if(n%k)
            ans++;
        cout<<ans<<endl;

    }
}
