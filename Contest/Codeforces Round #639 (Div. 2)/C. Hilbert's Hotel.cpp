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
        map<ll,ll>mp;
        ll n;
        cin>>n;
        ll arr[n+2];
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        for(ll i=0; i<n; i++)
            mp[(i+(arr[i]%n)+n)%n]=1;
        bool flag=true;
        for(ll i=0; i<n; i++)
            if(mp[i]==0)
                flag=false;
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
