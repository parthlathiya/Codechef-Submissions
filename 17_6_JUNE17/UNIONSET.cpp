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
		freopen("UNIONSET_in.txt","r",stdin);
	#endif


//--------------------------------------------------------------------------------------
	
	ll n,t,k,x,y;
	vll v[2501],v2;
	cin>>t;

	while(t--)
	{

		cin>>n>>k;
		rep(i,0,n)
		{
			cin>>x;
			v[i].clear();
			rep(j,0,x)
			{
				cin>>y;
				v[i].pb(y);
			}
			srt(v[i]);
		}

		ll ans=0,j2;

		rep(i,0,n)
		{
			j2=0;
			v2.clear();
			rep(j,1,k+1)
			{
				if(j2<v[i].size() && v[i][j2]==j)
					j2++;
				else
					v2.pb(j);
			}

			rep(j,i+1,n)
			{
				j2=0;
				rep(l,0,v[j].size())
				{
					if(j2>=v2.size())
						break;
					if(v[j][l]==v2[j2])
						j2++;
				}
				if(j2>=v2.size())
					ans++;
			}
		}
		cout<<ans<<"\n";
	}	

//--------------------------------------------------------------------------------------

	return 0;
}
