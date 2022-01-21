#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




int main()
{
    tc
    {
        ll n,m;
        cin>>n>>m;
        if(!n || !m)
        {
            if((m+n)%2)
            {
                cout<<2<<endl;
                cout<<(m+n)/2<<" "<<(m+n)-(m+n)/2<<endl;
            }
            else
            {
                cout<<1<<endl;
                cout<<(m+n)/2<<endl;
            }
        }
        else
        {
            if(n>m)
                swap(n,m);
            vector<ll>v;
            ll cnt=m-n;
            v.push_back(cnt/2);
            cnt=n*2;
            cnt+=((m-n+1)/2);
            v.push_back(cnt);
            if((m-n)%2)
            {
                ll i=v[0],j=v[1];
                for(ll k=i+1; k<j; k++)
                    v.push_back(k);

            }
            else
            {
                ll i=v[0],j=v[1];
                for(ll k=i+2; k<j; k+=2)
                    v.push_back(k);

            }
            sort(v.begin(),v.end());
            cout<<v.size()<<endl;
            for(ll i=0; i<v.size(); i++)
                cout<<v[i]<<" ";
            cout<<endl;


        }
    }
}
