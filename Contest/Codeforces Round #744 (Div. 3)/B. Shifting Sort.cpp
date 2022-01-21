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
        ll arr[n];
        vector<ll>v;
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        for(ll i=0;i<n;i++)
        {
           ll l=i,d=i;
          for(ll j=i+1;j<n;j++)
          {
              if(arr[i]>arr[j])
              {
                  v.push_back(i+1);
                  v.push_back(j+1);
                  d=j+1;
                  i--;
                  break;
              }
          }
          ll temp=arr[d-1];
          for(ll k=d-2;k>=l;k--)
            arr[k+1]=arr[k];
          arr[l]=temp;

        }
        cout<<v.size()/2<<endl;
        for(ll i=0;i<v.size();i+=2)
            cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+1]-v[i]<<endl;

    }
}
