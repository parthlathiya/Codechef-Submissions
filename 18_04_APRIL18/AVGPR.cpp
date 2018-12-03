#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define pll std::pair<ll, ll> 
#define ppll std::pair<pll, ll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::unordered_map<ll, ll> 
#define mpll std::unordered_map<pll, ll>
#define mppll std::unordered_map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define len length()
#define sz size()
const ll mod = 1e9 + 7;
const ll INF = 0x7FFFFFFFFFFFFFFF>>1;

/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/

int p[2234];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("AVGPR_in.txt","r",stdin);
    
        ll ttt,bkkk;
        cin>>ttt;
        bkkk=ttt;
        while(ttt--) {
            cout<<"Testcase - "<<bkkk-ttt<<"\n";
    #endif

//--------------------------------------------------------------------------------------

    s(t);
    while(t--)
    {
        s(n);
        int a;
        re(i,2001)
            p[i]=0;
        re(i,n){
            cin>>a;
            p[a+1000]++;
        }
        ll ans=0;
        re(i,2001) {   
            if(p[i]) {
                rep(j,i+1,2001)
                    if(p[j] && (i+j)%2==0 && p[(i+j)/2])
                        ans+=(p[i]*p[j]);
                if(p[i]>=2)
                    ans+=(p[i]*(p[i]-1LL)/2);
            }
        }
        cout<<ans<<endl;
    }

//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}