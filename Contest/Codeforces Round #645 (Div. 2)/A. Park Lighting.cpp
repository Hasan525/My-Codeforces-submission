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
        ll n,m;cin>>n>>m;
    ll res=n*m;
    ll ans=res/2;
    if(res%2)
        ans++;
    cout<<ans<<endl;
    }
}
