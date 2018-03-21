#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long 
#define ld long double
#define llu long long unsigned
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::map<ll, ll> 
#define mpll std::map<pll, ll>
#define mppll std::map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1000000007
#define mod1 1000000009
#define maxlong 1e18+5


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/

ll power(ll x,ll y,ll m)
{
	if(y==0)
		return 1;
	ll temp=power(x,y/2,m);
	// temp=((ll)pow(temp,2ll))%m;
	temp=(temp*temp)%m;
	if(y&1)
		temp=(temp*x)%m;
	return temp;
}

ll mult(ll x,ll y,ll m)
{
	if(y==0)
		return 0;
	ll temp=mult(x,y/2,m);
	temp=(temp<<1)%m;
	if(y&1)
		temp=(temp+x)%m;
	return temp;
}



// ll mult (ll x,ll y,ll m)
// {
// 	x%=m;
// 	y%=m;

// 	// (x*y)%m
// 	if(x==0 || y==0)
// 		return 0;
// 	ll ans=0;
// 	// cout<<x<<y<<"s";
// 	if(y>x)swap(x,y);
// 	// ll i=2;
// 	while(1){
// 		if(y>(m/x)){
// 			y-=(m/x);
// 			ans+=(x*(m/x));
// 			ans%=m;
// 		}
// 		// cout<<y*x<<" "<<ans<<"D";
// 		if((x*y)<m){
// 			ans+=(x*y);
// 			ans%=m;
// 			// cout<<"sdkjfs";
// 			break;
// 			}
// 	}

// 	// cout<<ans<<"re";
// 	// ll ans=0;
// 	// if(x<y)
// 	// {
// 	// 	re(i,x){
// 	// 		ans+=y;
// 	// 		ans%=m;
// 	// 	}
// 	// }
// 	// else
// 	// {
// 	// 	re(i,y){
// 	// 		ans+=x;
// 	// 		ans%=m;
// 	// 	}		
// 	// }
// 	return ans;
// }

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("EXPTREE_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	// std::vector<int> v[100];
	// std::vector<int> temp(100,4);
	// rep(i,0,100)
	// 	v[i] = temp;
	s(t);
	while(t--)
	{
		ll n,a,b;
		cin>>n;
		if(n&1){
			a=(n-1)>>1;
			b=n;
		}
		else{
			a=n>>1;
			b=n-1;
		}
		ll c=2*n-3;
		// cout<<c<<"s";
		ll temp=__gcd(a,c);
		a/=temp;
		c/=temp;
		temp=__gcd(b,c);
		b/=temp;
		c/=temp;
		// // cout<<a<<"S";
		// cout<<mult(mult(a%mod,b%mod,mod),power(c,1000000005,mod),mod)<<" ";
		// cout<<mult(mult(a%mod1,b%mod1,mod1),power(c,1000000007,mod1),mod1)<<"\n";

		cout<<(mod+mult(a%mod,mult(b%mod,power(c%mod,1000000005,mod),mod),mod))%mod<<" ";
		cout<<(mod1+mult(a%mod1,mult(b%mod1,power(c%mod1,1000000007,mod1),mod1),mod1))%mod1<<"\n";
		// cout<<mult(mult(a%mod1,b%mod1,mod1),power(c,1000000007,mod1),mod1)<<"\n";

		// cout<<((b%mod)*((a%mod)*power(c,1000000005,mod))%mod)%mod<<" ";
		// cout<<((b%mod1)*((a%mod1)*power(c,1000000007,mod1))%mod1)%mod1<<"\n";
	}



//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}