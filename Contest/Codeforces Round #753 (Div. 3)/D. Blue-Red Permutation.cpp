
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
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        string s;cin>>s;
        vector<ll>a,b;
        for(ll i=0;i<n;i++)
            {
                if(s[i]=='B')
                    a.push_back(arr[i]);
                else
                    b.push_back(arr[i]);
            }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool flag=false;
        for(ll i=0;i<a.size();i++)
        {
            if(a[i]<i+1)
                flag=true;
        }
        ll cnt=a.size()+1;
        for(ll i=0;i<b.size();i++)
        {
            if(b[i]>cnt)
                flag=true;
            cnt++;
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
