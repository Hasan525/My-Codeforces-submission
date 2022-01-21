#include<bits/stdc++.h>
#define ll long long int
#define t ll t;cin>>t;while(t--)
using namespace std;
int main()
{
    t
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0; i<n; i++)
            cin>>a[i];
        for(ll i=0; i<n; i++)
            cin>>b[i];
        if(a[0]!=b[0])
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll flag=1;
        ll c=0,d=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>b[i] && d==0)
            {
                    flag=0;
                    break;
            }
            if(a[i]<b[i] && c==0)
            {
                    flag=0;
                    break;
            }
            if(a[i]==1)
                c++;
            if(a[i]==-1)
                d++;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
