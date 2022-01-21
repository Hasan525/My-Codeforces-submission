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
        ll x,n;
        cin>>x>>n;

        ull cnt=(n*(n+1))/2;
        ull res=cnt/2;
        if(cnt%2)
            res++;
        cnt-=res;
        ll y=x;
        if(n%2==0)
        {
            if(x%2)
            {
                x+=cnt;
                x-=res;
            }
            else
            {
                x-=cnt;
                x+=res;
            }
            cout<<x<<endl;

        }
        else
        {
            n--;
             cnt=(n*(n+1))/2;
             res=cnt/2;
            if(cnt%2)
                res++;
            cnt-=res;
           // cout<<res<<" "<<cnt<<endl;
            if(x%2)
            {
                x+=cnt;
                x-=res;
            }
            else
            {
                x-=cnt;
                x+=res;
            }
            //cout<<x<<endl;
            if((n/2)%2==0)
            {
                if(y%2)
                x+=(n+1);
                else
                    x-=(n+1);
                   // cout<<x<<endl;
            }
            else
            {
                if(y%2)
                    x-=(n+1);
                else
                    x+=(n+1);
                   // cout<<x<<endl;
            }
            cout<<x<<endl;

        }



    }
}
