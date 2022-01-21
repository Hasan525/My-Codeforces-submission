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
       for(ll i=1;i<=n;i++)
        cin>>arr[i];

       ll cnt =0;
       bool flag=false;
       for(ll i=1;i<=n;i++)
       {
          flag=false;
           for(ll j=0;j<=cnt;j++)
           {
               if(arr[i]%(i+1-j)!=0)
               {
                   flag=true;
                   break;
               }
           }
           if(!flag)
            break;
           cnt++;
       }
       if(flag)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
}
