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
#define maxlong 9223372036854775808


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("NEO01_in.txt","r",stdin);
	#endif


//--------------------------------------------------------------------------------------
	
	ll t,n,a[100001],co,sum,sum2;

	cin>>t;
	while(t--)
	{
		sum=0;sum2=0;co=0;
		cin>>n;
		rep(i,0,n)
			cin>>a[i],sum+=a[i];
		sort(a,a+n);
		ll ans=sum*n;
		rep(i,0,n)
		{
			sum2+=a[i];
			ans=max(ans,sum2+(sum-sum2)*(n-i-1));
		}
		cout<<ans<<endl;
	}

//--------------------------------------------------------------------------------------

	return 0;
}
