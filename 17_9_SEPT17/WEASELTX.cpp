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


vll g[212345];
int doneat[212345];
ll le[212345];

void dfs(ll i,ll level)
{
    if(doneat[i])
        return;
    le[i]=level;
    doneat[i]=1;
    for(auto aa:g[i])
    {
        if(!doneat[aa])
            dfs(aa,level+1);
    }
}

ll ncr(ll n, ll r) {
    if(r > n / 2) r = n - r; 
    ll ans = 1;
    rep(i,1,r+1){
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("WEASELTX_in.txt","r",stdin);
    
        ll ttt,bkkk;
        cin>>ttt;
        bkkk=ttt;
        while(ttt--) {
            cout<<"Testcase - "<<bkkk-ttt<<"\n";
    #endif

//--------------------------------------------------------------------------------------

    s(n);
    s(q);
    ll a,b,day;
    re(i,n-1)
    {
        cin>>a>>b;
        g[a].eb(b);
        g[b].eb(a);
    }
    
    dfs(0,0);

    ll ans;
    ll val[n];
    re(i,n)
        cin>>val[i];
    re(i,q)
    {
        cin>>day;
        // if(n==1)
        // {
        //     if(!(day&1))
        //         cout<<0<<"\n";
        //     else
        //         cout<<val[0]<<"\n";
        //     continue;
        // }
        // if(day<=1)
        // {
            if(day==0)
            {
                cout<<fixed<<val[0]<<"\n";
            }
        //     else
        //     {
        //         ans=0;
        //         re(i,n)
        //             ans^=val[i];
        //         cout<<fixed<<ans<<"\n";
        //     }
        // }
        else
        {
            ans=0;
            re(i,n){
                ll temp=ncr(day+le[i]-1,le[i]);
                // (day-2)*le[i] + ((le[i]*(le[i]-1))>>1)*(((day-2)*(day-1))>>1);
                
                // cout<<temp<<"dd"<<endl;
                if(temp&1)
                    ans^=val[i];
            }
            cout<<fixed<<ans<<"\n";
        }
    }

//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}