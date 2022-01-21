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
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        ll ans=0;
        while(!is_sorted(arr,arr+n))
        {
            if(ans%2==0)
            {
                for(ll i=0; i<n-1; i++)
                {
                    if(i%2==0)
                    {
                        if(arr[i]>arr[i+1])
                            swap(arr[i],arr[i+1]);
                    }
                }
            }
            else
            {
               for(ll i=0; i<n-1; i++)
                {
                    if(i%2)
                    {
                        if(arr[i]>arr[i+1])
                            swap(arr[i],arr[i+1]);
                    }
                }
            }
            ans++;
        }
        cout<<ans<<endl;
    }
}
