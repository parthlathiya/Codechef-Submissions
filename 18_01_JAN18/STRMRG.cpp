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

ll lc[5001][5001];

ll lcs(string a,string b)
{
    lc[0][0]=(a[0]==b[0]);
    rep(i,1,a.length())
        lc[i][0]=lc[i-1][0] || a[i]==b[0];
    rep(i,1,b.length())
        lc[0][i]=lc[0][i-1] || b[i]==a[0];
    rep(i,1,a.length())
        rep(j,1,b.length())
            if(a[i]==b[j]) 
                lc[i][j]=1+lc[i-1][j-1];
            else
                lc[i][j]=max(lc[i-1][j],lc[i][j-1]);
    return lc[a.length()-1][b.length()-1];
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("STRMRG_in.txt","r",stdin);
    
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
        ll n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        string aa="",bb="";
        ll i=1;
        aa+=a[0];
        while(a[i]!='\0')
        {
            if(a[i]!=a[i-1])
                aa+=a[i];
            i++;
        }
        i=1;
        bb+=b[0];
        while(b[i]!='\0') {
            if(b[i]!=b[i-1])
                bb+=b[i];
            i++;
        }

        cout<<aa.length()+bb.length()-lcs(aa,bb)<<endl;

    }

//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}