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
        ll n,h,ans=0;
        cin>>n>>h;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n,greater<ll>());
        ll cnt=arr[0]+arr[1];
        ans=h/cnt;
        ans*=2;
         h=h%cnt;
        if(h>arr[0])
            ans+=2;
        else if(h)
        ans++;
        cout<<ans<<endl;


    }
}
