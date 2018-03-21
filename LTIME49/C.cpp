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
#define mod 1e9+7
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

ll p[512345];
ll c[512345];
ll k[512345];
vll child[512345];
// ll anss[512345];
mll m;
ll calc(ll x, ll kk)
{

	// for(auto a:)
	// dfs(x
	// if(m.find({x,kk})!m.end())
		// return 
	cout<<x<<" "<<kk<<endl;
	if(k[x]==kk-1)
		m[x] +=calc(x,k[x]);
	// if(ans[x]!=-1)
	// 	return ans[x];

	ll anss=0;
	for(auto a:child[x])
	{
		// if(k[a]==k[x]-1)
			calc(a,kk);
	}
	// ans[x]=anss;
	// doneat
	cout<<"return "<<x<<" "<<kk<<" "<<m[x]<<endl;  
	return m[x]==0?m[x]=1:m[x];
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("C_in.txt","r",stdin);
	
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

	// s(n);
	s(t);
	while(t--){
		s(n);
		s(x);
		re(i,n-1)
			cin>>p[i];

		re(i,n){
			cin>>c[i];
			// clubs.insert(c[i]);
			// clubb[c[i]].eb(i);
		}

		re(i,n)
			cin>>k[i];

		re(i,n){
			if(c[i+1]==c[p[i]])
			child[p[i]].eb(i+1);
			// childinclub[c[i+1]]==-1 || 
			 // to p[i]
		}

		// for(auto club:clubs)
		// {
		// 	for(auto v:clubb[club])
		// 	{
		// 		// if(!doneatv])
		// 			calc(v,k[v]);
		// 	}
		// 		// if(v==0 || c[v]!=c[p[v]]){
		// 		// 	toplevel[club].eb(v);
		// 		// }
		// }

		re(i,n)
			calc(i,k[i]);
		cout<<calc(0,k[0]);
		re(i,n)
			cout<<m[i]<<endl;
		// for(auto club:clubs)
		// {
		// 	for(auto v:toplevel[club])
		// 	{
		// 		m.clear();
		// 		preorder(v);
		// 	}
		// }		

	}

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}