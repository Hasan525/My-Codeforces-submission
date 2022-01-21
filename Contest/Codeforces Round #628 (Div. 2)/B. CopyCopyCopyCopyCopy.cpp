#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c=0;
        cin>>n;
        ll ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
          if(mp[ara[i]]==0)
          {
              c++;
              mp[ara[i]]++;
          }
        }
        cout<<c<<endl;
    }
}
