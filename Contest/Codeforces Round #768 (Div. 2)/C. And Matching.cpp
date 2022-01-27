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
        ll n,k;
        cin>>n>>k;

        if(k<n-1)
        {
            ll x=1,y=n-2;
            cout<<k<<" "<<n-1<<endl;
            for(ll i=1; i<n/2; i++)
            {
                if(x==k)
                {
                    cout<<0<<" "<<y<<endl;
                    x++;
                    y--;
                }
                else if(y==k)
                {
                    cout<<x<<" "<<0<<endl;
                    x++;
                    y--;
                }
                else
                {
                    cout<<x<<" "<<y<<endl;
                    x++;
                    y--;
                }
            }
        }
        else if(n==4 && k==n-1)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            cout<<n-2<<" "<<n-1<<endl;
            cout<<2<<" "<<n-3<<endl;
            cout<<1<<" "<<3<<endl;
            cout<<0<<" "<<n-4<<endl;
            ll x=4,y=n-5;
            for(ll i=0; i<((n/2)-4); i++)
            {
                cout<<x<<" "<<y<<endl;
                x++;
                y--;
            }
        }
    }
}
