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
        ll n;cin>>n;
        ll x,mx=0,mi=10000000007;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            mx=max(mx,x);
            mi=min(mi,x);
        }
        cout<<mx-mi<<endl;

    }
}
