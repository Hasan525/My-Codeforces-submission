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
       ll arr[n+2];
       ll cnt=0;
       for(ll i=1;i<=n;i++)
           {
                cin>>arr[i];
                ll res=i+cnt;
                if(res<arr[i])
                    cnt+=(arr[i]-res);
           }
           cout<<cnt<<endl;

    }
}
