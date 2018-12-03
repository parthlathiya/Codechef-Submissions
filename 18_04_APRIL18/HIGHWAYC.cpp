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

ld v[12];
ld d[12];
ld p[12];
ld c[12];
        

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("HIGHWAYC_in.txt","r",stdin);
    
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
        ld n,s,y;
        cin>>n>>s>>y;

        re(i,n)
            cin>>v[i];
        re(i,n)
            cin>>d[i];
        re(i,n)
            cin>>p[i];
        re(i,n)
            cin>>c[i];

        ld cr=0.0;

        ld ti=y*1.0/(ld)s;


        re(i,n) {
            // cout<<(cr+ti)*v[i]<<" "<<abs(p[i])<<endl;
            // if(((abs(p[i])+c[i])/v[i])-cr<.000001 || (abs(p[i])/v[i])-(cr+ti)>.000001)
            if( (cr*v[i])>=abs(p[i])+c[i]+0.000001 || (cr+ti)*v[i]<=abs(p[i])-0.000001 )

             // ((abs(p[i])+c[i])/v[i])-cr<.000001 || (abs(p[i])/v[i])-(cr+ti)>.000001)
                cr+=ti;
            else
                cr=(abs(p[i])+c[i])/v[i] + ti;
            // cout<<cr<<endl;
        }

        cout<<fixed<<setprecision(8)<<cr<<endl;
    }

//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}