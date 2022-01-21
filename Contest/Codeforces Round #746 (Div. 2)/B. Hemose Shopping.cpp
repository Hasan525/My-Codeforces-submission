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

     ll n,k;cin>>n>>k;
     ll arr[n+2];
     vector<ll>v;
     for(ll i=1;i<=n;i++)
     {
         cin>>arr[i];
         v.push_back(arr[i]);
     }
     sort(v.begin(),v.end());
     ll cnt=0;
     for(ll i=1;i<=n;i++)
     {
         if(arr[i]==v[i-1])
            continue;
         else if(i-1<k && n-i<k)
            cnt++;
     }
     if(cnt)
        cout<<"NO"<<endl;
     else
        cout<<"YES"<<endl;

    }
}
