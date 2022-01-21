#include<bits/stdc++.h>
#define ll long long int
#define tc ll t;cin>>t;while(t--)
#define sz size()
#define st string
using namespace std;
int main()
{
    tc
    {
        ll n,k;cin>>n>>k;
        if(n<=k)
        {
            cout<<1<<endl;
            continue;
        }
        if(n%k==0)
        {
            cout<<n/k<<endl;
            continue;
        }
        vector<ll>v;
        ll d=sqrt(n);
        for(ll i=1;i<=d;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                if(i*i!=n)
                    v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
        ll res;
        for(ll i=0;i<v.sz;i++)
        {
           if(v[i]<=k)
                res=v[i];
        }
        cout<<n/res<<endl;
    }
}
