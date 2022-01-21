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
        ll n;
        cin>>n;
        ll ara[n],a=0,b=0;
        for(ll i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(ll i=0; i<n; i++)
        {
            if(ara[i]%2==0)
                a++;
            else
                b++;
        }
        if(a%2==0 && b%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        ll flag=0;
        sort(ara,ara+n);
        for(ll i=1; i<n; i++)
        {
            if(ara[i]-ara[i-1]==1)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
