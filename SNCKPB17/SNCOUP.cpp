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
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("SNCOUP_in.txt","r",stdin);
	#endif


//--------------------------------------------------------------------------------------
	
	s(t);
	while(t--){
		s(n);
		string a,b;
		cin>>a>>b;
		ll ans=0;
		int flag1=0,flag2=0;
		rep(i,0,n){

			if(a[i]=='*'){
				flag1=1;
			}
			if(b[i]=='*'){
				flag2=1;
			}
		}
		if(flag1==1 && flag2==1)
			ans++;
		ll p=0,q=0;
		if(flag1 && flag2){
			rep(i,0,n){
				if(a[i]=='*')
				{
					if(p==1){
						p=0;
						q=0;
						ans++;
					}
					p=1;
				}
				if(b[i]=='*')
				{
					if(q==1){
						p=0;
						q=0;
						ans++;
					}
					q=1;
					if(a[i]=='*')
						p=1;
				}
			}
		}
		else if(flag1){
			rep(i,0,n){
				if(a[i]=='*')
				{
					if(p==1){
						p=0;
						ans++;
					}
					p=1;
				}
			}
		}
		else if(flag2){
			rep(i,0,n){
				if(b[i]=='*')
				{
					if(q==1){
						q=0;
						ans++;
					}
					q=1;
				}
			}

		}

		cout<<ans<<"\n";
	}
	

//--------------------------------------------------------------------------------------

	return 0;
}
