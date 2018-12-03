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


bool ina(string a,char b)
{
	re(i,a.length())
		if(a[i]==b)
			return true;
	return false;
}

bool anytwoandnotinb(string a,string b)
{
	re(i,a.length()-1)
		if(a[i]==a[i+1] && !ina(b,a[i]))
			return true;
	return false;
}

bool anyoneandnotinb(string a,string b)
{
	re(i,a.length())
		if(!ina(b,a[i]))
			return true;
	return false;
}

bool sub(string a,string b)
{
	re(i,a.length())
		if(!ina(b,a[i]))
			return false;	
	return true;
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("PALINGAM_in.txt","r",stdin);
	
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
		string a,b;
		cin>>a>>b;
		srt(a);
		srt(b);
		if(anytwoandnotinb(a,b) || (anyoneandnotinb(a,b) && sub(b,a)))
			cout<<"A\n";
		else
			cout<<"B\n";
	}


//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}