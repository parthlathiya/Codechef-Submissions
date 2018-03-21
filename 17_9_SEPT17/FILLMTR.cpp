#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::unordered_map<ll, ll> 
#define mpll std::map<pll, ll>
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
#define mod 1000000007
#define maxlong 1e18+5
#define len length()
#define sz size()


/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("FILLMTR_in.txt","r",stdin);
    
        ll ttt,bkkk;
        cin>>ttt;
        bkkk=ttt;
        while(ttt--) {
            cout<<"Testcase - "<<bkkk-ttt<<"\n";
    #endif

//--------------------------------------------------------------------------------------

    s(t);
    ll n,q;
    while(t--)
    {
        cin>>n>>q;
        mpll m;
        re(i,n+1)
            re(j,n+1)
                m[{i,j}]=-1;
        ll b,c,val;
        int f=1;
        re(i,q)
        {
            cin>>b>>c>>val;
            if(m[{b,c}]==-1)
                m[{b,c}]=val;
            else
            {
                if(m[{b,c}]!=val)f=0;
            }
            if(m[{c,b}]==-1)
                m[{c,b}]=val;
            else
            {
                if(m[{c,b}]!=val)f=0;
            }
        }
            rep(i,1,n+1){
                if(m[{i,i}]!=-1 && m[{i,i}]!=0){
                    f=0;break;}
                
                rep(j,1,n+1){
                    rep(k,1,n+1)
                        if(m[{i,k}]!=-1 && m[{k,j}]!=-1 && m[{i,j}]!=-1 && m[{i,j}]!=m[{i,k}]^m[{k,j}])
                            {f=0;break;}
                if(!f)break;}
            if(!f)break;}
        if(f)
            cout<<"yes\n";
        else
            cout<<"no\n";    
    }


//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}