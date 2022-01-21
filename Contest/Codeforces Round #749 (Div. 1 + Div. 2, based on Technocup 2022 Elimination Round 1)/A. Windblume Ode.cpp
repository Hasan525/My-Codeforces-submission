#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
bool prime[20005];
ll mx=20005;

void seive()
{
    memset(prime,true,sizeof(prime));
    for(ll i=2; i*i<=mx; i++)
    {
        if(prime[i])
        {
            for(ll j=i*2; j<=mx; j+=i)
                prime[j]=false;
        }
    }
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    seive();

    tc
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        ll ans=n;
        if(prime[sum])
        {
            for(ll i=0;i<n;i++)
            {
                if(prime[sum-arr[i]]==false)
                {
                    arr[i]=0;
                    break;
                }
            }
            ans--;
        }
        cout<<ans<<endl;
        for(ll i=0;i<n;i++)
            if(arr[i])
            cout<<i+1<<" ";
        cout<<endl;


    }

}
