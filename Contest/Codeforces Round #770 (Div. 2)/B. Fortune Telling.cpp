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
       ll n,x,y;cin>>n>>x>>y;
       ll sum=x;
       ll arr[n+2];
       for(ll i=0;i<n;i++)
       {
           cin>>arr[i];
           sum+=arr[i];
       }
       if(sum%2==y%2)
        cout<<"Alice"<<endl;
       else
        cout<<"Bob"<<endl;

    }
}
