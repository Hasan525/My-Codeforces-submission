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
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];

        ll cnt=arr[n-1],ans=0;
        for(ll i=n-2;i>=0; )
        {
            if(arr[i]==cnt)
               {
                   i--;
               }
            else
            {
                ans++;
                ll x=n-(i+1);
                i=i-x;

            }
        }
        cout<<ans<<endl;
    }
}
