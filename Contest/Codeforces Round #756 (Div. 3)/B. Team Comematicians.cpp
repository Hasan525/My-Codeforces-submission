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
        ll a,b;cin>>a>>b;
        ll ans=0;
        ll cnt=a+b;
        cnt/=4;
        if(cnt>a)
            cnt=a;
        if(cnt>b)
            cnt=b;
        cout<<cnt<<endl;
    }
}
