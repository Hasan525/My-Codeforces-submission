#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<int>
#define vpi vector<pair<int,int> >
#define mpi map<int,int>
#define  si set<int>
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define reP(i,a,n) for(ll i=a;i<=n;i++)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define st string
#define sz size()
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)
int main()
{
    tc
    {
        ll l,r,m,t,d;
        cin>>l>>r>>m;
        ll a=l;
        ll b=r;
        ll c=l;
        if(l>m)
        {
            ll d=l-m;
            c=r;
            b=l;
            while(1)
            {
                if(c-b==d)
                    break;
                c--;

            }
            cout<<a<<" "<<b<<" "<<c<<endl;
            continue;
        }
        ll flag=1;
        while(1)
        {
             if(m%a<=r-l)
                {
                    break;
                }
             d=m/a;
            d++;
            if((d*a)-m<=r-l)
            {
                flag=0;
                break;
            }
            a++;
        }
        //cout<<a<<" "<<m<<endl;
        while(flag)
        {
            if(b-c==m%a)
                break;
            b--;

        }
        if(flag==0)
        {
            c=r;
            b=l;
        }
        while(flag==0)
        {
           if(c-b==(d*a)-m)
            break;
            c--;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
