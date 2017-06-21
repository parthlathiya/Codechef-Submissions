// #include<bits/stdc++.h>
// #define ll int
// #define vll vector<ll>
// #define mll map<ll,ll>
// #define sll set<ll>
// #define fo(i,n) for(i=0;i<n;i++)
// using namespace std;

#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define sll std::set<ll>
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define pb push_back
#define mod 1000000007

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

std::vector<vll> backup;
map<ll,ll> start;


ll calminn(ll v,ll i)
{
    ll currnode=start[v];

    ll temp=0,j=30,dig;
    repr(j,31)
    {
        dig=(i>>j)%2;
        if(backup[currnode][dig]==0)
        {
            if(dig==0)
                temp=temp*2+1;
            else
                temp=temp*2;
            currnode=backup[currnode][1-dig+2];
        }
        else
        {
            if(dig==0)
                temp=temp*2;
            else
                temp=temp*2+1;
            currnode=backup[currnode][dig+2];
        }
    }
    return temp;
}


ll calmaxx(ll v,ll i)
{
    ll temp=0,currnode=start[v],j=30,dig;
    repr(j,31)
    {
        dig=(i>>j)%2;
        if(backup[currnode][1-dig]==0)
        {
            if(dig==0)
                temp=temp*2;
            else
                temp=temp*2+1;
            currnode=backup[currnode][dig+2];
        }
        else
        {
            if(dig==0)
                temp=temp*2+1;
            else
                temp=temp*2;

            currnode=backup[currnode][1-dig+2];
        }
    }
    return temp;
}

void addnode(ll u,ll v,ll k)
{
    start[u]=backup.size();
    backup.pb(vll(4,0));

    ll prevnode=start[v],currnode=start[u],j=30,dig;

    repr(j,31)
    {
        dig=(k>>j)%2;
        backup[currnode]=backup[prevnode];
        if(dig)
        {
            backup[currnode][1]=backup[prevnode][1]+1;
            backup[currnode][3]=backup.size();
            backup.pb(vll(4,0));
        }
        else
        {
            backup[currnode][0]=backup[prevnode][0]+1;
            backup[currnode][2]=backup.size();
            backup.pb(vll(4,0));
        }
        currnode=backup.size()-1;
        if(backup[prevnode][dig+2]==0)
        {
            backup[prevnode][dig+2]=backup.size();
            backup.pb(vll(4,0));
        }
        prevnode=backup[prevnode][dig+2];
    }
}

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
    freopen("GPD_in.txt","r",stdin);
#endif

    ll n,q,r,k;

    cin>>n>>q>>r>>k;

    start[r]=0;
    backup.pb(vll(4,0));

    ll currnode=0,dig;
    
    repr(j,31)
    {
        dig=(k>>j)%2;
        backup[currnode][dig]++;
        if(backup[currnode][dig+2]==0)
        {
            backup[currnode][dig+2]=backup.size();
            currnode=backup.size();
            backup.pb(vll(4,0));
        }
        else
            currnode=backup[currnode][dig+2];
    }
    
    ll last_answer=0,u,v;

    rep(i,0,n-1)
    {
        cin>>u>>v>>k;
        addnode(u,v,k);
    }
    
    ll t;

    rep(i,0,q)
    {
        cin>>t;
        
        t^=last_answer;
        
        if(t==0)
        {
            cin>>v>>u>>k;
            u^=last_answer;
            v^=last_answer;
            k^=last_answer;
            addnode(u,v,k);
        }
        else
        {
            cin>>v>>k;
            
            v^=last_answer;
            k^=last_answer;
            
            ll minn=calminn(v,k)^k;
            ll maxx=calmaxx(v,k)^k;
            
            last_answer=minn^maxx;
            
            cout<<minn<<" "<<maxx<<endl;
        }
    }

    return 0;
}
