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
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            while(arr[i])
            {
                if(mp[arr[i]]==0 && arr[i]<=n)
                {
                    mp[arr[i]]++;
                    break;
                }
                arr[i]/=2;
            }
        }
        bool flag=true;
        for(ll i=1;i<=n;i++)
            if(mp[i]==0)
            flag=false;
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
