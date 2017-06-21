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
#define s(yy) ll yy;cin>>yy
#define mod 1000000007

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/


multiset<long double> mm;

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
    freopen("COOK82C_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

ld n,m;
cin>>n;

cin>>m;

ld tt;
rep(i,0,n)
{
    cin>>tt;
    mm.insert(tt);
}

ld cnt=0,q;
multiset<long double>::iterator it;
rep(i,0,m)
{
    cin>>q;
    ld bk=cnt;
    rep(j,0,q-bk-1)
    {
        it=mm.end();
        it--;
        ld b=*it;
        mm.erase(it);
        if(floor(b/2)>0)mm.insert(floor(b/2));
    cnt++;
}
    // cnt=cnt+max(0,q-2);
        it=mm.end();
        it--;
        cout<<fixed<<setprecision(0)<<*it<<endl;
}


//  --------------------------------------------------------------------------------------

return 0;
}
