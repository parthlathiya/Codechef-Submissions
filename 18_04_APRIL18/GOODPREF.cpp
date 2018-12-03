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

ll p[1123456];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("GOODPREF_in.txt","r",stdin);
    
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
        string s;
        cin>>s;
        s(n);
        ll nn=s.length();
        ll cnt=0;
        re(i,nn){
            if(s[i]=='a')
                cnt++;
            p[i]=2*cnt-i-1;
        }
        // re(ibababababaaaut<<p[i]<<" ";
        ll ans=0;
        re(i,n)
        {
            re(j,nn)
                if(p[j]+i*p[nn-1]>0)
                    ans++;
        }
cout<<ans;

        cout<<endl;
        ll tt=p[nn-1];
        ans=0;
        if(tt>0)
        {   ll pa=0;
            re(i,nn){
                if(p[i]>0)
                    ans+=n;
                else
                    ans+=max(0LL,n-(ll)floor(p[i]*1.0/(-tt))-1LL);
            // cout<<ans-pa<<" ";
            // pa=ans;
        }
        }
        else if(tt<0)
        {
            re(i,nn)
                if(p[i]>0)
                    ans+=min(n,(ll)ceil(p[i]*1.0/(-tt)));
        }
        else
        {
            re(i,nn)
                if(p[i]>0)
                    ans+=n;
        }
        cout<<ans<<endl;
    }

//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}