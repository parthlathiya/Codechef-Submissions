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
#define mll std::unordered_map<ll, ll> 
#define mpll std::unordered_map<pll, ll>
#define mppll std::unordered_map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1000000007
#define maxlong 1e18+5


/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/


int dp[200][200][200];
int n;
int a[200];

ll count(int aa,int b,int c)
{
	if(c>=200)
		return 0;	
	if(dp[aa][b][c]!=0)
		return dp[aa][b][c];
	int temp=min(aa,b);
	ll ans=count(b,a[c+1],c+1)%mod;
	re(i,temp)
	{
		ans+=count(b-i-1,a[c+1]+i+1,c+1);
		ans%=mod;
	}
	ans+=temp;
	ans%=mod;
	return dp[aa][b][c]=ans;
}


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("CHEFFA_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	s(t);
	while(t--)
	{
		s(n);
		re(i,200)
			re(j,200)
				re(k,200)
					dp[i][j][k]=0;

		int aa,b,c;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=n;i<200;i++)
			a[i]=0;
		if(n==1)
		{
			cout<<1<<endl;continue;
		}
		aa=a[0];
		b=a[1];
		c=1;
		
		cout<<count(aa,b,c)+1<<endl;
	}

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}