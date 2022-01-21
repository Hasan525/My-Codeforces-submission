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
        bool flag=true,f=true;
        ll n,ans=0,res=0,cnt=1;
        cin>>n;
        char ch;
        string s;
        cin>>s;
        ll i=0,j=n-1;
        while(i<=j)
        {
            if(s[i]==s[j])
                i++,j--;
            else if(cnt)
            {
                ch=s[i];
                i++,cnt=0;
                ans++;
            }
            else if(ch==s[i])
                i++,ans++;
            else if(ch==s[j])
                j--,ans++;
            else
            {
                flag=false;
                break;
            }
        }
        if(!flag)
            ans=n;
        cnt=1,i=0,j=n-1;

        while(i<=j)
        {
            if(s[i]==s[j])
                i++,j--;
            else if(cnt)
            {
                ch=s[j];
                j--,cnt=0;
                res++;
            }
            else if(ch==s[i])
                i++,res++;
            else if(ch==s[j])
                j--,res++;
            else
            {
                f=false;
                break;
            }
        }
        if(!f)
            res=n;
        if(!f && !flag)
            cout<<-1<<endl;
        else
            cout<<min(ans,res)<<endl;

    }



}
