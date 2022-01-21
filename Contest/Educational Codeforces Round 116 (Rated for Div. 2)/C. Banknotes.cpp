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
        ll n,k,x;cin>>n>>k;
        k++;
        ll arr[n+2];
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            arr[i]=pow(10,x);
        }
        ull ans=0;
        for(ll i=0;i<n-1 && k ;i++)
        {
            x=(arr[i+1]/arr[i])-1;
            x=min(k,x);
            k-=x;
            ans+=(x*arr[i]);
        }
        if(k)
            ans+=(k*arr[n-1]);
        cout<<ans<<endl;
    }
}
