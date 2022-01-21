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
        st s;cin>>s;
        ll n=s.sz;
        ll mi=200000000;
        ll a[3];
        a[0]=a[1]=a[2]=-1;
        for(ll i=0;i<n;i++)
        {
            a[s[i]-'1']=i;
            if(a[0]<0 || a[1]<0 || a[2]<0)
                continue;
            mi=min(mi,i-(min(a[0],min(a[1],a[2])))+1);
        }
        if(mi==200000000)
            cout<<0<<endl;
        else
            cout<<mi<<endl;

    }
}
