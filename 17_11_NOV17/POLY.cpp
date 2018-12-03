#include <bits/stdc++.h>
using namespace std;
 
#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
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
 
int main()
{
 
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
 
#ifdef PARTH_LATHIYA_HOME
 
    freopen("POLY_in.txt","r",stdin);
 
    ll ttt,bkkk;
    cin>>ttt;
    bkkk=ttt;
    while(ttt--) {
        cout<<"Testcase - "<<bkkk-ttt<<"\n";
#endif
 
//--------------------------------------------------------------------------------------
 
    // s(t);
    // while(t--)
    // {
    //     s(n);
    //     ll a[n],b[n],c[n],d[n];
    //     re(i,n)
    //         cin>>a[i]>>b[i]>>c[i]>>d[i];
    //     s(q);
    //     re(i,q){
    //         s(x);
    //         ll ans=INF;
    //         re(j,n)
    //             ans=min(ans,a[j]+b[j]*x+c[j]*x*x+d[j]*x*x*x);
    //         cout<<ans<<'\n';
    //     }
    // }


    s(t);
    while(t--)
    {
        s(n);
        ll a[n],b[n],c[n],d[n];
        vector<pair<ld,ld>> v;
        re(i,n){
            cin>>a[i]>>b[i]>>c[i]>>d[i];
            v.pb({b[i],a[i]});
        }
        rsrt(v);
        ld aa[n-1];
        re(i,n-1)
        {
            cout<<v[i+1].ss<<v[i].ss<<v[i+1].ff<<v[i].ff;
            aa[i]=1.0*(-v[i+1].ff+v[i].ff)/(v[i+1].ss-v[i].ss);
            cout<<aa[i]<<endl;
        }

        s(q);
        re(i,q){
            s(x);
            if(x<aa[0]){
                // cout<<x;
                cout<<v[0].ff*x+v[0].ss<<endl;
            }
            else
            {
                ld  *pos=lower_bound(aa,aa+n-1,(ld)x);
                if((pos-aa)==n-1)
                    pos--;
                // cout<<v[pos-aa].ff;
                cout<<v[pos-aa+1].ff*x+v[pos-aa+1].ss<<endl;
            }
            // ()min(a[mi]+b[mi]*x,a[ma]+b[ma]*x)<<'\n';
        }
    }

//--------------------------------------------------------------------------------------
 
#ifdef PARTH_LATHIYA_HOME
    cout<<"\n"; }
#endif
 
return 0;
} 