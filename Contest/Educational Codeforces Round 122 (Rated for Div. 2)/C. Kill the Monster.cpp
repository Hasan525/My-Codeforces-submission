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
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        bool flag=false;
        ll k,u,v;cin>>k>>u>>v;
        for(ll i=0;i<=k;i++)
        {
            ll cnt=(i*u)+y;
            ll es=a/cnt;
            if(a%cnt)
                es++;
            ll res=((k-i)*v)+x;
            ll cs=res/b;
            if(res%b)
                cs++;
            if(es<=cs)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
