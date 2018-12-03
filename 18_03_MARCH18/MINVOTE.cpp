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

ll ans[112345];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("MINVOTE_in.txt","r",stdin);
    
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
        ll a[n];
        re(i,n){
            cin>>a[i];
            ans[i]=0;
        }
        ans[n]=0;
        ll pr[n],sf[n];
        pr[0]=a[0];
        rep(i,1,n)  
            pr[i]=pr[i-1]+a[i];
        sf[n-1]=a[n-1];
        for(ll i=n-2;i>=0;i--)
            sf[i]=sf[i+1]+a[i];
        reverse(sf,sf+n);
        ll pp=0;
        re(i,n)
        {   
            int idx=lower_bound(pr,pr+n,pr[i]+a[i]+1)-pr-1;
            // cout<<idx<<"s";
            ans[idx+2]--;
            ans[i+1]++;
            // re(i,n) 
            // cout<<ans[i]<<" ";
        // cout<<endl;
            idx=lower_bound(sf,sf+n,sf[n-1-i]+a[i]+1)-sf-1;
            // cout<<sf[i]<<a[i]<<"s";

            if(n-1-idx-1==-1)
                pp++;
            else
                ans[n-1-idx-1]++;
            ans[i]--;
            // re(i,n) 
            // cout<<ans[i]<<" ";
        // cout<<endl;
        }
        ans[0]+=pp;
        rep(i,1,n)
            ans[i]+=ans[i-1];
        re(i,n) 
            cout<<ans[i]<<" ";
        cout<<endl;
    }

    
//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}