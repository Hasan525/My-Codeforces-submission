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
        ll a,b;
        cin>>a>>b;
        ll cnt=INT_MAX;
        ll x=a,y=b,res=0;
        while(1)
        {
            ll rs=(x|y);
            if(rs==y)
            {
                cnt=min(cnt,res+1);
                break;
            }
            res++;
            x++;

        }
        x=b,y=a,res=0;
        while(1)
        {
            ll rs=(y|x);
            if(rs==x)
            {
                cnt=min(cnt,res+1);
                break;
            }
            res++;
            x++;

        }
        cout<<min(cnt,b-a)<<endl;



    }
}
