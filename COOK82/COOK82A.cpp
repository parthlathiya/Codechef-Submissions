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

int main()
{

ios::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("COOK82A_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

s(t);
while(t--)
{

string a,b,c,d;
ll g1,g2,g3,g4;
cin >>a>>g1>>b>>g2>>c>>g3>>d>>g4;
ll gg[26];
gg[a[0]-'A']=g1;
gg[b[0]-'A']=g2;
gg[c[0]-'A']=g3;
gg[d[0]-'A']=g4;

if(gg['M'-'A']>gg['R'-'A'] && gg['B'-'A']>gg['E'-'A'])
    cout<<"Barcelona\n";
else
    cout<<"RealMadrid\n";
}

//  --------------------------------------------------------------------------------------

return 0;
}
