#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<int>
#define vpi vector<pair<int,int> >
#define mpi map<int,int>
#define  si set<int>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define reP(i,a,n) for(int i=a;i<=n;i++)
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
const int N=100024;
vi v[N];
int main()
{
    tc
    {
        ll n,cnt=0;
        cin>>n;
        while(1)
        {
            if(n%6==0)
            {
                cnt++;
                n/=6;
            }
            else if((n*2)%6==0)
            {
                cnt++;
                n*=2;
            }
            else
                break;
        }
        if(n==1)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;
    }
}
