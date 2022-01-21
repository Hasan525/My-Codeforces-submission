
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
      ll n,h;cin>>n>>h;
      ll arr[n],brr[n];
      for(ll i=0;i<n;i++)
            cin>>arr[i];

     ll lo=1,hi=h+1;
     ll ans=0;
     while(lo<=hi)
     {
         ll cnt=0;
         ll mid=(lo+hi)/2;
         for(ll i=0;i<n-1;i++)
         {
           if(arr[i+1]-arr[i]>=mid)
                cnt+=mid;
           else
            cnt+=(arr[i+1]-arr[i]);
         }
         cnt+=mid;
         if(cnt>=h) ans=mid;
         if(cnt==h) break;
         else if(cnt>h) hi=mid-1;
         else lo=mid+1;

     }
     cout<<ans<<endl;

    }
}
