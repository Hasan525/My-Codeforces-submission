#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll t;cin>>t;
   while(t--)
   {
       ll n,a,b,c,d;
       cin>>n>>a>>b>>c>>d;
       ll e=c-d;
       ll f=c+d;
       ll flag=0,ans=0;
       for(ll i=a-b;i<=a+b;i++)
       {
           ans++;
           ll s=i*n;
           if(s>=e && s<=f)
           {
               flag=1;
               break;
           }
           else if(ans>1 && i!=a+b && s<c-d)
           {
               ll h=(c-d)-s;
               if(h<n)
               {
                   flag=1;
                   break;
               }
           }
           else if(ans>1 && i!=a+b && s>c+d)
           {
               ll h=s-(c+d);
               if(h<n)
               {
                   flag=1;
                   break;
               }
               else
                break;
           }
       }
       if(flag)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
   }
}
