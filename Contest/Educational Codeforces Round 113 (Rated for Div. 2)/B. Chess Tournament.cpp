#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    tc
    {
        ll n,mx=-1;
        cin>>n;
        map<char,ll>mp;
        string s;
        cin>>s;
        char ans[500][500];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(i==j)
                    ans[i][j]='X';
                else
                    ans[i][j]='=';
            }
        }
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='2')
            {
                bool flag=true;
                for(ll j=0; j<n; j++)
                {
                    if(i==j)
                        continue;
                    if( s[j]=='2' && ans[j][i]=='=')
                    {
                        ans[i][j]='+';
                        ans[j][i]='-';
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<"NO"<<endl;
                    goto bc;
                }
            }

        }
        cout<<"YES"<<endl;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
                cout<<ans[i][j];
            cout<<endl;
        }
bc:
        continue;
    }


}
