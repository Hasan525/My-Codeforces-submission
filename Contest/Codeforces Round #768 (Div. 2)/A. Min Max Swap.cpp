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
      ll a[n+1],b[n+1];
      for(ll i=0;i<n;i++)
        cin>>a[i];
      for(ll i=0;i<n;i++)
        cin>>b[i];
        ll mxa=-1,mxb=-1;
      for(ll i=0;i<n;i++)
        {
            if(a[i]>b[i])
            swap(a[i],b[i]);
            mxa=max(mxa,a[i]);
            mxb=max(mxb,b[i]);
        }
        cout<<mxa*mxb<<endl;

    }
}
