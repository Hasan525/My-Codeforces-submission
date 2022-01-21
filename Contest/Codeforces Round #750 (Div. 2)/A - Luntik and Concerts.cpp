#include<bits/stdc++.h>
#define ll long long int
#define for0 for(ll i=0;i<n;i++)
#define for1 for(ll i=1;i<=n;i++)
#define itf it->first
#define its it->second
#define pb push_back
#define str string
#define con continue
#define tc ll t;cin>>t;while(t--)
using namespace std;
int main()
{

tc
{
    ll arr[4];
    ll sum=0;
    for(ll i=0;i<3;i++)
       {
            cin>>arr[i];
            sum+=arr[i]*(i+1);
       }
    if(sum%2)
        cout<<1<<endl;
    else
        cout<<0<<endl;

}
}
