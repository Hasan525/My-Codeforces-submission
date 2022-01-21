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
    ll sum1=0,sum2=0;
    ll j=1;
    ll d=n/2;
    for(ll i=1;i<=n-1;i++)
    {
        if(i<d)
            sum1+=(j*2);
        else
            sum2+=(j*2);
        j*=2;
    }
    sum1+=(j*2);
    cout<<abs(sum1-sum2)<<endl;
    }

}
