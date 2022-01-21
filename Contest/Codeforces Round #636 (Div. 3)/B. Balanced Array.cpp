#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll d=n/2;
        ll c=d-1;
        ll sum=0,sum2=0;
        if(d%2==0)
        {
            cout<<"YES"<<endl;
            for(ll i=2;i<=n;i++)
            {
                if(i%2==0)
                    {
                        cout<<i<<" ";
                        sum+=i;
                    }
            }
            for(ll i=1;i<n,c!=0;i++)
            {
                if(i%2!=0)
                    {
                        cout<<i<<" ";
                        sum2+=i;
                        c--;
                    }

            }
            cout<<sum-sum2<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

