#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




int main()
{
    tc
    {
        ll n,l,r,x;
        cin>>n>>l>>r;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            v.pb(x);
        }
        ll ans=0;
        sort(v.begin(),v.end());
        for(ll i=0; i<n-1; i++)
        {
            ll low=lower_bound(v.begin(), v.end(), l-v[i])-v.begin();
            ll upp=upper_bound(v.begin(), v.end(), r-v[i])-v.begin();
            cout<<low<<" "<<upp<<endl;
            if(low==0 && l-v[i]>v[low] || low==n)
                continue;
            if(upp<n && v[upp-1]>r-v[i])
                upp--;
            if(low)
                low++;
            if(low<=i)
                low=i+1;
            cout<<low<<" "<<upp<<endl;
            if(low>upp)
                continue;
            ans+=upp-low+1;
            if(v[low-1]==v[i])
                ans--;
            if(v[upp-1]==v[i] and v[i]!=v[low-1])
                ans--;
            cout<<ans<<endl;

        }
         cout<<ans<<endl;




    }
}
