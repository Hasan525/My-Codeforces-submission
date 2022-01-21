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
        ll n,m,r,x;cin>>n>>m>>r>>x;
        string s[n+1];
        for(ll i=0;i<n;i++)
            cin>>s[i];
        if(s[r-1][x-1]=='B')
        {
            cout<<0<<endl;
            continue;
        }
        bool flag=false;
        for(ll i=0;i<m;i++)
        {
            if(s[r-1][i]=='B')
                flag=true;
        }
        if(flag)
        {
            cout<<1<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(s[i][x-1]=='B')
                flag=true;
        }
        if(flag)
        {
            cout<<1<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
                if(s[i][j]=='B')
                flag=true;
        }
        if(flag)
            cout<<2<<endl;
        else
            cout<<-1<<endl;

    }
}
