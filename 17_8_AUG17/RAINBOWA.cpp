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

ll cnt[8];

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("RAINBOWA_in.txt","r",stdin);
	
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
		// re(i,8)
		// cnt[i]=0;
		ll a[n];
		re(i,n)
			cin>>a[i];
		ll i,j;
		i=0;
		while(i<n && a[i]==1)i++;
		cnt[1]=i;
		j=0;
		while(i+j<n && a[i+j]==2)j++;
		cnt[2]=j;
		i=i+j;
		j=0;		
		while(i+j<n && a[i+j]==3)j++;
		cnt[3]=j;
		i=i+j;
		j=0;		
		while(i+j<n && a[i+j]==4)j++;
		cnt[4]=j;
		i=i+j;
		j=0;		
		while(i+j<n && a[i+j]==5)j++;
		cnt[5]=j;
		i=i+j;
		j=0;		
		while(i+j<n && a[i+j]==6)j++;
		cnt[6]=j;
		i=i+j;
		j=0;
		while(i+j<n && a[i+j]==7)j++;
		cnt[7]=j;
		i=i+j;
		int f=0;
		re(j,7){
			// cout<<cnt[j+1]<<" ";
			if(cnt[j+1]==0)f=1;
		}
		if(!f)
			{
					
						j=0;
					while(i+j<n && a[i+j]==6)j++;
				if(cnt[6]!=j)f=1;
				i=i+j;
						j=0;
					while(i+j<n && a[i+j]==5)j++;
					// cout<<i+j;
				if(cnt[5]!=j)f=1;
						
i=i+j;
						j=0;
					while(i+j<n && a[i+j]==4)j++;
				if(cnt[4]!=j)f=1;
	i=i+j;					j=0;
					while(i+j<n && a[i+j]==3)j++;
				if(cnt[3]!=j)f=1;
		i=i+j;				j=0;
					while(i+j<n && a[i+j]==2)j++;
				if(cnt[2]!=j)f=1;
			i=i+j;			j=0;
					while(i+j<n && a[i+j]==1)j++;
				if(cnt[1]!=j)f=1;
			

			}
			if(f)
				cout<<"no\n";
			else
				cout<<"yes\n";

	}


//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}