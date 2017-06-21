#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define mpll std::map<pair<ll,ll>, ll>
#define sll std::set<ll>
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1000000007
#define ite iterator
#define maxlong 9223372036854775808
#define diff(a,b) max(a,b)-min(a,b)


/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("D_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

s(t);
while(t--)
{
	ll n,l,aa,b;
	cin>>n>>l>>aa>>b;
	ll a[n];
	rep(i,0,n)
		cin>>a[i];
	sort(a,a+n);
	ll lim=aa;
	ll move=0;
	rep(i,0,n)
	{
		if(a[i]<lim){
			move+=lim-a[i];
			a[i]=lim;
			lim+=l;
		}
	}
	// cout<<move<<endl;
	lim=b-l;
	repr(i,n)
	{
		if(a[i]>lim){
			move+=a[i]-lim;
			a[i]=lim;
			lim-=l;
		}	
	}
	// cout<<move<<endl;
	if(n%2==0){
		ll po=a[n/2-1]+l;
		rep(i,0,n/2)
			move+=po-(a[i]+l);
		rep(i,n/2,n)
			move+=a[i]-po;
	}
	else
	{
		// ll po=a[n/2];
		rep(i,0,n/2)
			move+=a[n/2]-(a[i]+l);
		rep(i,n/2+1,n)
			move+=a[i]-(a[n/2]+l);
	}
	cout<<move<<endl;
}


//  --------------------------------------------------------------------------------------

return 0;
}
