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
        ll n;
        cin>>n;
        ll arr[n+1];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans=n/2;
        for(ll i=0;i<n and ans;i++)
        {
            if(arr[i]!=arr[0])
            {
                cout<<arr[i]<<" "<<arr[0]<<endl;
                ans--;
            }
        }


    }
}
