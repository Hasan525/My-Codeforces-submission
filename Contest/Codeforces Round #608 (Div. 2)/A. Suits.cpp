#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    cin>>a>>b>>c>>d>>e>>f;
    g=min(a,d);
    h=d-g;
    i=min(b,c);
    j=min(i,h);
    k=min(i,d);
    l=d-k;
    m=min(l,a);
    if(e>f)
    {
        cout<<(g*e)+(j*f);

    }
    else if(e<=f)
    {
        cout<<(k*f)+(m*e);
    }
}
