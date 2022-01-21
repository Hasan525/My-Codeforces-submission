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
        ll n,k,d=0,sum=0;
        cin>>n>>k;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<n;i++)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<ll>());
       for(ll i=0;i<k;i++)
       {
           if(a[i]<b[i])
            a[i]=b[i];
       }
       for(ll i=0;i<n;i++)
        sum+=a[i];
       cout<<sum<<endl;
    }
}
