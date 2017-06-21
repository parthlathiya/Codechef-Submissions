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
 
 
 
// ll map<ll,ll>my;
// ll my[1000000001];
// set<ll> ss;
vll v;
 
 
ll power(ll x, ll y)
{
	// cout<<x<<"x"<<y<<"y"<<p<<"p";
    ll res = 1;      // Initialize result
 
    x = x % mod;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % mod;  
    }
    return res;
}
 
 
void pf(ll n)
{
    while (n%2 == 0)
    {
        // my[2]++;
		v.pb(2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    ll temp=sqrt(n);
    for (ll i = 3; i <= temp; i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            // printf("%d ", i);
            // my[i]++;
			// ss.insert(i);
			v.pb(i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n 
    // is a prime number greater than 2
    if (n > 2)v.pb(n);
 
        // printf ("%d ", n);
    
}
 
 
int main()
{
 
ios::sync_with_stdio(false);
 
#ifndef ONLINE_JUDGE
    freopen("COOK82B_in.txt","r",stdin);
#endif
 
//  --------------------------------------------------------------------------------------
 
s(n);
ll tt;
rep(i,0,n)
{
	cin>>tt;
	pf(tt);
}
 
 
ll ans=1;
 
srt(v);
 
// rep(i,0,v.size())
// cout<<v[i];
ll cnt=1;
 
ll flag=0;
rep(i,1,v.size()){
if(v[i]==v[i-1])
{
	cnt++;
}
else{
	if(cnt<n || cnt%n)
		flag=1;
	if(cnt<n+1 || cnt%(n+1)){
		// cout<<"hhc"<<ans;
		ans=(ans*power(v[i-1],n+1-(cnt<(n+1)?cnt:cnt%(n+1))))%mod;
	}
	// cout<<cnt%(n+1)<<endl;
	cnt=1;
}
// cout<<ans<<endl;
}
if(cnt<n || cnt%n)
		flag=1;
	if(cnt<n+1 || cnt%(n+1)){
		// cout<<"hhc"<<ans;
		ans=(ans*power(v[v.size()-1],n+1- (cnt<(n+1)?cnt:cnt%(n+1))))%mod;
	}
 
if(flag)
	cout<<ans;
	else
		cout<<"justdoit";
 
 
//  --------------------------------------------------------------------------------------
 
return 0;
}
  