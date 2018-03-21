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

ll sg[2112345][6];

// 0 - total
// 1 - pre 0
// 2 - pre 1
// 3 - suf 0
// 4 - suf 1
// 5 - full

// ll a[512345];
ll n,q,l1,r1;


void build(ll idx,ll l,ll r)
{
    if(l==r){
        if(0<=r1 && 0>=l1){
            sg[idx][0]=1;
            sg[idx][1]=0;
            sg[idx][2]=1;
            sg[idx][3]=0;
            sg[idx][4]=1;
            sg[idx][5]=1;
        }
        else if(0<l1)
        {
            sg[idx][0]=0;
            sg[idx][1]=1;
            sg[idx][2]=0;
            sg[idx][3]=1;
            sg[idx][4]=0;
            sg[idx][5]=0;
        }
        else
        {
            sg[idx][0]=0;
            sg[idx][1]=0;
            sg[idx][2]=0;
            sg[idx][3]=0;
            sg[idx][4]=0;
            sg[idx][5]=2;
        }
        return;

    }
    ll mid=(l+r)/2;
    build(idx*2,l,mid);
    build(idx*2+1,mid+1,r);

    sg[idx][0]=sg[idx*2][0]+sg[idx*2+1][0]+sg[idx*2][3]*sg[idx*2+1][2]+sg[idx*2][4]*(sg[idx*2+1][1]+sg[idx*2+1][2]);
    
    sg[idx][1]=sg[idx*2][1];
    if(sg[idx*2][5]==0)
        sg[idx][1]+=sg[idx*2+1][1];
    
    sg[idx][2]=sg[idx*2][2];
    if(sg[idx*2][5]==0)
        sg[idx][2]+=sg[idx*2+1][2];
    else if(sg[idx*2][5]==1)
        sg[idx][2]+= sg[idx*2+1][1]+sg[idx*2+1][2];
    
    sg[idx][3]=sg[idx*2+1][3];
    if(sg[idx*2+1][5]==0)
        sg[idx][3]+=sg[idx*2][3];
    
    sg[idx][4]=sg[idx*2+1][4];
    if(sg[idx*2+1][5]==0)
        sg[idx][4]+=sg[idx*2][4];
    else if(sg[idx*2+1][5]==1)
        sg[idx][4]+= sg[idx*2][3]+sg[idx*2][4];
    
    sg[idx][5]=max(sg[idx*2][5],sg[idx*2+1][5]);

}



void update(ll idx,ll l,ll r,ll id,ll val)
{
    // cout<<idx<<l<<r<<id<<val;
    if(l==r){
        if(val<=r1 && val>=l1){
            sg[idx][0]=1;
            sg[idx][1]=0;
            sg[idx][2]=1;
            sg[idx][3]=0;
            sg[idx][4]=1;
            sg[idx][5]=1;
        }
        else if(val<l1)
        {
            sg[idx][0]=0;
            sg[idx][1]=1;
            sg[idx][2]=0;
            sg[idx][3]=1;
            sg[idx][4]=0;
            sg[idx][5]=0;
        }
        else
        {
            sg[idx][0]=0;
            sg[idx][1]=0;
            sg[idx][2]=0;
            sg[idx][3]=0;
            sg[idx][4]=0;
            sg[idx][5]=2;
        }
        return;
    }
    ll mid=(l+r)/2;
    if(id<=mid)
        update(idx*2,l,mid,id,val);
    else
        update(idx*2+1,mid+1,r,id,val);
    // sg[idx][0]=max(sg[idx*2][0],sg[idx*2+1][0]);
    // sg[idx][1]=fun(sg[idx][0])+sg[idx*2][1]+sg[idx*2+1][1];
    // cout<<l<<r<<sg[idx][1]<<endl;

    sg[idx][0]=sg[idx*2][0]+sg[idx*2+1][0]+sg[idx*2][3]*sg[idx*2+1][2]+sg[idx*2][4]*(sg[idx*2+1][1]+sg[idx*2+1][2]);
    
    sg[idx][1]=sg[idx*2][1];
    if(sg[idx*2][5]==0)
        sg[idx][1]+=sg[idx*2+1][1];
    
    sg[idx][2]=sg[idx*2][2];
    if(sg[idx*2][5]==0)
        sg[idx][2]+=sg[idx*2+1][2];
    else if(sg[idx*2][5]==1)
        sg[idx][2]+= sg[idx*2+1][1]+sg[idx*2+1][2];
    
    sg[idx][3]=sg[idx*2+1][3];
    if(sg[idx*2+1][5]==0)
        sg[idx][3]+=sg[idx*2][3];
    
    sg[idx][4]=sg[idx*2+1][4];
    if(sg[idx*2+1][5]==0)
        sg[idx][4]+=sg[idx*2][4];
    else if(sg[idx*2+1][5]==1)
        sg[idx][4]+= sg[idx*2][3]+sg[idx*2][4];
    
    sg[idx][5]=max(sg[idx*2][5],sg[idx*2+1][5]);
}


ll* query(ll idx,ll l,ll r,ll s,ll e)
{
    if(s<=l && r<=e){
        // cout<<l<<s<<r<<e<<sg[idx][0]<<endl;
        return sg[idx];
    }
    ll mid=(l+r)/2;
    int f1=-1,f2=-1;
    ll *temp1,*temp2;
    if(!(e<l || mid<s)){
        f1=1;
        temp1=query(idx*2,l,mid,s,e);
    }
    if (!(e<mid+1 || r<s)){
        f2=2;
        temp2=query(idx*2+1,mid+1,r,s,e);
    }
    if(f1==1 && f2==2)
    {
        ll *temp;
        temp[0]=temp1[0]+temp2[0]+temp1[3]*temp2[2]+temp1[4]*(temp2[1]+temp2[2]);
    
        temp[1]=temp1[1];
        if(temp1[5]==0)
            temp[1]+=temp2[1];
        
        temp[2]=temp1[2];
        if(temp1[5]==0)
            temp[2]+=temp2[2];
        else if(temp1[5]==1)
            temp[2]+= temp2[1]+temp2[2];
        
        temp[3]=temp2[3];
        if(temp2[5]==0)
            temp[3]+=temp1[3];
        
        temp[4]=temp2[4];
        if(temp2[5]==0)
            temp[4]+=temp1[4];
        else if(temp2[5]==1)
            temp[4]+= temp1[3]+temp1[4];
        
        temp[5]=max(temp1[5],temp2[5]);
        return temp;

    }
    else if(f1==1)
    {
        return temp1;
    }
    else
    {
        return temp2;
    }

}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("CSUBQ_in.txt","r",stdin);
    
        ll ttt,bkkk;
        cin>>ttt;
        bkkk=ttt;
        while(ttt--) {
            cout<<"Testcase - "<<bkkk-ttt<<"\n";
    #endif

//--------------------------------------------------------------------------------------

    cin>>n>>q>>l1>>r1;
    build(1,1,n);
    ll type,aa,bb;
    re(i,q)
    {
        cin>>type>>aa>>bb;
        // cout<<aa<<bb;
        if(type==1)
            update(1,1,n,aa,bb);
            // ;
        else
            cout<<query(1,1,n,aa,bb)[0]<<endl;
    }
//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}