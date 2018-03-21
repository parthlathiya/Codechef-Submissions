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


ll sg[412345];
ll sg1[412345];
ll lazy[412345];
ll lazy1[412345];

void update(ll idx,ll s,ll e,ll l,ll r,ll y)
{
    if(lazy[idx]!=0)
    {
        sg[idx]+=((e-s+1)*lazy[idx])%mod;
        sg[idx]%=mod;
        if(s!=e)
        {
            lazy[idx<<1]+=lazy[idx];
            lazy[idx<<1]%=mod;
            lazy[(idx<<1)+1]+=lazy[idx];
            lazy[(idx<<1)+1]%=mod;
        }
        lazy[idx]=0;
    }

    if(r<s || e<l)
        return;
    if(l<=s && e<=r){
        sg[idx]+=((s-e+1)*y)%mod;
        sg[idx]%=mod;
        if(s!=e)
        {
            lazy[idx<<1]+=y;
            lazy[idx<<1]%=mod;
            lazy[(idx<<1)+1]+=y;
            lazy[(idx<<1)+1]%=mod;
        }
        return;
    }
    ll mid=(s+e)>>1;
    update(idx<<1,s,mid,l,r,y);
    update((idx<<1)+1,mid+1,e,l,r,y);
    sg[idx]=(sg[idx<<1]+sg[(idx<<1)+1])%mod;
}

ll query(ll idx,ll s,ll e,ll x)
{
    if(lazy[idx]!=0)
    {
        sg[idx]+=((e-s+1)*lazy[idx])%mod;
        sg[idx]%=mod;
        if(s!=e)
        {
            lazy[idx<<1]+=lazy[idx];
            lazy[idx<<1]%=mod;
            lazy[(idx<<1)+1]+=lazy[idx];
            lazy[(idx<<1)+1]%=mod;
        }
        lazy[idx]=0;
    }
    if(s==e)
    {
        return sg[idx];
    }
    ll mid=(s+e)>>1;
    if(s<=x && x<=mid)  
        query(idx<<1,s,mid,x);
    else
        query((idx<<1)+1,mid+1,e,x);
    // sg[idx]=sg[idx<<1]+sg[(idx<<1)+1];
}


void update1(ll idx,ll s,ll e,ll l,ll r,ll y)
{
    if(lazy1[idx]!=0)
    {
        sg1[idx]+=((e-s+1)*lazy1[idx])%mod;
        sg1[idx]%=mod;
        if(s!=e)
        {
            lazy1[idx<<1]+=lazy1[idx];
            lazy1[idx<<1]%=mod;
            lazy1[(idx<<1)+1]+=lazy1[idx];
            lazy1[(idx<<1)+1]%=mod;
        }
        lazy1[idx]=0;
    }

    if(r<s || e<l) 
        return;
    if(l<=s && e<=r){
        sg1[idx]+=((e-s+1)*y)%mod;
        sg1[idx]%=mod;
        if(s!=e)
        {
            lazy1[idx<<1]+=y;
            lazy1[idx<<1]%=mod;
            lazy1[(idx<<1)+1]+=y;
            lazy1[(idx<<1)+1]%=mod;
        }
        return;
    }

    ll mid=(s+e)>>1;
    update1(idx<<1,s,mid,l,r,y);
    update1((idx<<1)+1,mid+1,e,l,r,y);
    sg1[idx]=(sg1[idx<<1]+sg1[(idx<<1)+1])%mod;
}

ll query1(ll idx,ll s,ll e,ll x)
{
    if(lazy1[idx]!=0)
    {
        sg1[idx] = (sg1[idx] + ((e-s+1)*lazy1[idx])%mod)%mod;
        if(s!=e)
        {
            lazy1[idx<<1]+=lazy1[idx];
            lazy1[idx<<1]%=mod;
            lazy1[(idx<<1)+1]+=lazy1[idx];
            lazy1[(idx<<1)+1]%=mod;
        }
        lazy1[idx]=0;
    }

    if(s==e)
    {
        return sg1[idx];
    }

    ll mid=(s+e)>>1;
    if(s<=x && x<=mid)  
        query1(idx<<1,s,mid,x);
    else
        query1((idx<<1)+1,mid+1,e,x);
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("SEACO_in.txt","r",stdin);
    
        ll ttt,bkkk;
        cin>>ttt;
        bkkk=ttt;
        while(ttt--) {
            cout<<"Testcase - "<<bkkk-ttt<<"\n";
    #endif

//--------------------------------------------------------------------------------------

    s(t);
    ll n,m;
    while(t--)
    {
        cin>>n>>m;
        ll type[m],l[m],r[m];
        re(i,n<<2){
            sg1[i]=0;
            lazy1[i]=0;
        }
        re(i,m<<2){
            sg[i]=0;
            lazy[i]=0;
        }
        re(i,m)
        {
            cin>>type[i]>>l[i]>>r[i];
            if(type[i]==1)
            {
                update(1,1,m,i+1,i+1,1);
            }
            else
            {
                update(1,1,m,l[i],r[i],1);
            }
        }
        for(ll i=m-1;i>=0;i--)
        {
            ll temp=query(1,1,m,i+1);
            // cout<<temp<<" d";
            if(type[i]==2)
            {
                update(1,1,m,l[i],r[i],temp%mod);
            }
            else
            {
                // cout<<l[i]<<r[i]<<temp<<endl;
                update1(1,1,n,l[i],r[i],temp%mod);
            }   
        }
        re(i,n)
            if(i!=n-1)
                cout<<query1(1,1,n,i+1)<<" ";
            else
                cout<<query1(1,1,n,i+1)<<endl;


    }


//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}