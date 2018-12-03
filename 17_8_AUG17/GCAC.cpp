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


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("GCAC_in.txt","r",stdin);
	
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
		s(n);
		s(m);
		
		ll minsal[n], saloff[m], maxjoboff[m], tempo[m];
		string qual[n];


		re(i,n)
			cin>>minsal[i];
		re(i,m)
			cin>>saloff[i]>>maxjoboff[i];
		re(i,n)
			cin>>qual[i];
		
		re(i,m)
			tempo[i]=maxjoboff[i];
		ll a=0,b=0,c=0;
		re(i,n){
			ll ma=-1;ll maidx;
			// cout<<qual[0][0]<<maxjoboff[0]<<saloff[0]<<minsal[0]<<saloff[0]<<ma<<endl;
			re(j,m)
			{
				if(qual[i][j]=='1' && maxjoboff[j]!=0 && saloff[j]>=minsal[i] && saloff[j]>ma){
					ma=saloff[j];
					maidx=j;
				}
			}	
			// cout<<ma<<"s";
			if(ma!=-1)
			{
				maxjoboff[maidx]--;
				a++;
				b+=ma;
			}
		}
		re(i,m){
			if(tempo[i]==maxjoboff[i])c++;
		}

		cout<<a<<" "<<b<<" "<<c<<"\n";
	}


//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}