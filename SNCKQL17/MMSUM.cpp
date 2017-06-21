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

bool myf (ll i,ll j) { return (i>=j); }

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("MMSUM_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

ll t;
cin>>t;
while(t--)
{
	ll n,q;
	cin>>n>>q;;
	ll ttt;
	vll v;
	rep(i,0,n){
		cin>>ttt;
		v.pb(ttt);
	}

	// cin>>q;
	// ll k[q];
	ll tt;
	srt(v);
	reverse(v.begin(), v.end());
	rep(i,0,q)
	{
		cin>>tt;
		ll j=0,ans=0;
		ll cnt=n;
		// if(a[n-1]<)
		// binary_search (v.begin(), v.end(), ))
		j=lower_bound (v.begin(), v.end(), tt,myf)-v.begin();
		// while(j<cnt && a[j]>=tt)j++;
		// ans+=j;
// cout<<j<<"f";
		while(j<cnt)
		{
			if(j+(tt-v[j])<cnt)
				cnt-=(tt-v[j]);
			else
				break;
			// ans++;
			j++;
		}
		cout<<j<<endl;

	}

}

//  --------------------------------------------------------------------------------------

return 0;
}
