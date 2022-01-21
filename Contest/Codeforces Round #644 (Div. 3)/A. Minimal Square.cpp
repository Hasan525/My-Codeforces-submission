#include<bits/stdc++.h>
#define ll long long int
#define tc ll t;cin>>t;while(t--)
#define sz size()
#define st string
using namespace std;
int main()
{
    tc
    {
        ll a,b;cin>>a>>b;
        ll c=min(a,b);
        ll d=max(a,b);
        ll ans=max(c*2,d);
        cout<<ans*ans<<endl;
    }
}
