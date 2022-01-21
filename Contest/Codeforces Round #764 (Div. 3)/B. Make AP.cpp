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
        ll a,b,x;cin>>a>>b>>x;
        if((b-(a-b))>=x && (b-(a-b))%x==0)
            x=(b-(a-b));
        else if((b-(x-b))>=a && (b-(x-b))%a==0)
            a=(b-(x-b));
        else if((((a-x)/2)+x)>=b && (((a-x)/2)+x)%b==0)
            b=(((a-x)/2)+x);
        else if((((x-a)/2)+a)>=b && (((x-a)/2)+a)%b==0)
            b=(((x-a)/2)+a);
        if(a-b==b-x)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
