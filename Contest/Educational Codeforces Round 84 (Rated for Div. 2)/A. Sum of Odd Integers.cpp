#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        if(n==1 && k==1)
            cout<<"YES"<<endl;
        else if(n==1 && k!=1)
            cout<<"NO"<<endl;
        else if(n==2 && k==1)
            cout<<"NO"<<endl;
        else if(n==2 && k==2)
            cout<<"NO"<<endl;
        else if(n==2 && k!=1 && k!=2)
            cout<<"NO"<<endl;
        else if(n%2!=0 && k%2==0)
            cout<<"NO"<<endl;
        else if(n%2==0 && k%2!=0)
            cout<<"NO"<<endl;
        else if(n%2!=0 && k==1)
            cout<<"YES"<<endl;
        else if(n%2==0 && k==2)
            cout<<"YES"<<endl;
        else
        {
            ll chk=sqrt(n);
            if(k>chk)
                cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
