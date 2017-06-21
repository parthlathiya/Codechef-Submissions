#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define pb push_back
#define mod 1e9+7

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/


bool CompareDist(pair<int,ll> p1,pair<int,ll> p2)
{
    return p1.second>p2.second;
}


int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("CLIQUED_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    ll T;
    cin>>T;
    while(T--)
    {
        ll n,k,x,m,s;
        cin>>n>>k>>x>>m>>s;
        ll a[1001][1001]={-1};
        ll p,q,r;
        

        rep(i,0,m)
        {
            cin>>p>>q>>r;
            a[p][q]=r;
            a[q][p]=r;
        }
        ll mind[100001]={LLONG_MAX};
        mind[s]=0;
        priority_queue<pair<int,ll>,vector<pair<int,ll> >,bool CompareDist<pair<int,ll> > > my;
        my.push(make_pair(s,0));
        int vis[100001]={false};
        
        while(!my.empty())
        {

            int cur=my.top().first;
            my.pop();
            vis[cur]=true;
            if(cur<=k)
            {
                rep(i,1,k+1)
                {
                    if(!vis[i]){mind[i]=min(mind[i],mind[cur]+x);my.push(make_pair(i,mind[i]));}
                }
                rep(i,k+1,n+1)
                {
                    if(a[cur][i]!=-1 && !vis[i]){mind[i]=min(mind[i],mind[cur]+a[i][cur]);my.push(make_pair(i,mind[i]));}
                }
            }
            else
            {
                rep(i,1,n+1)
                {
                    if(a[cur][i]!=-1 && !vis[i]){mind[i]=min(mind[i],mind[cur]+a[i][cur]);my.push(make_pair(i,mind[i]));}
                }
            }

            rep(i,1,n+1)
                cout<<mind[i]<<" ";
        }



    }

//  --------------------------------------------------------------------------------------

return 0;
}
