#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
#define MOD 1000000007
using namespace std;

ll n,m,c[251],d[251],e;
ll fun(ll m2)
{
    ll i=0,j=0,co=0;

    while(i<n && j<m)
    {
        if(abs(c[i]+m2-d[j])<=e)
        {
            co++;
            i++;
            j++;
            continue;
        }

            //cout<<c[i]+m<<" "<<d[j]<<endl;
        if(c[i]+m2<d[j])
            i++;
        else
            j++;
    }

    return co;
}

int main()
{
    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
        freopen("B_in.txt","r",stdin);
    #endif

    ll i,j,k,t;
    sll s;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>e;

        fo(i,n)
            cin>>c[i];
        fo(i,m)
            cin>>d[i];

        sort(c,c+n);
        sort(d,d+m);

        s.clear();
        fo(i,n)
        {
            fo(j,m)
            {
                s.insert(c[i]-d[j]);
                s.insert(d[j]-c[i]);
            }
        }

        ll ans=0;
        sll::iterator it;
        ll maxx=*s.begin();
        ll minn=*s.end();
        for(ll p=maxx; p<=minn;p++)
            ans=max(ans,fun(p));
        cout<<ans<<endl;
    }

    return 0;
}