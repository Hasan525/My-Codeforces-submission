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
        ll n;cin>>n;
    ll ara[n];
    for(ll i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    ll mi=1000000000;
    for(ll i=1;i<n;i++)
    {
        if(ara[i]-ara[i-1]<mi)
            mi=ara[i]-ara[i-1];
    }
    cout<<mi<<endl;
   }
}
