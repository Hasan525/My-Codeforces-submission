#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1415926535
int n,tem,lo,hi,last=0,tit,l,h,dif,ck=0;
int main()
{
    int taa;
    cin>>taa;
    while(taa--)
    {
        last=0,ck=0;
        cin>>n>>tem;
        hi=tem,lo=tem;
        for(int i=0; i<n; i++)
        {
            cin>>tit>>l>>h;
            if(ck==0)
            {
                dif=tit-last;
                last=tit;
                hi+=dif;
                lo-=dif;
                if(lo>h || hi<l)
                    ck++;
                hi=hi<h?hi:h;
                lo=lo>l?lo:l;
            }
        }
        if(ck==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
