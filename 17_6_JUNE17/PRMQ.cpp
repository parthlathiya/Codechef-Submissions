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
#define pll std::pair<ll, ll>
#define mpll std::map<pair<ll,ll>, ll>
#define sll std::set<ll>
#define fi first
#define se second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
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

vll primes;
vll primefac[10000001];

void sieve(ll n)
{
	rep(i,2,n+1)
	{
		if(primefac[i].empty())
		{
			primes.pb(i);
			for(ll j=i;j<=n;j+=i)
				primefac[j].pb(i);
		}
	}
}


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("PRMQ_in.txt","r",stdin);

		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

// 3 1 1 2 0 0
// 3
// 1 1
// 2 1
// 2 3

	mpll m;
	s(n);
	ll a[n];
	ll ma=-1;
	re(i,n){
        cin>>a[i];
        ma=max(ma,a[i]);
	}
	sieve(ma);
	rep(i,0,n)
	{
        ll temp=a[i];
        for(auto p:primefac[a[i]])
        {
            ll cnt=0;
            while(temp%p==0){cnt++;temp/=p;}
            m[{a[i],p}]=cnt;
        }
	}

	rep(i,1,n)
	{
        for(auto p:primes)
        {
           m[{a[i],p}]+=m[{a[i-1],p}];
        }
	}
	rep(i,0,n)
	{
        rep(j,1,primes.size())
        {
           m[{a[i],primes[j]}]+=m[{a[i],primes[j-1]}];
        }
	}

	// rep(i,0,n)
	// {	cout<<a[i]<<" ";
	// 	rep(j,0,6)
	// 	{
	// 		cout<<primes[j]<<" "<<m[{a[i],primes[j]}]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	s(q);
	re(i,q)
	{
	    s(l);
	    s(r);
	    s(x);
	    s(y);
	    ll ans=0;
	    ll lll=lower_bound(primes.begin(),primes.end(),x)-primes.begin();
	    ll rrr=lower_bound(primes.begin(),primes.end(),y)-primes.begin();
	    // cout<<lll<<" "<<rrr;
	        if(l==1)
                ans+= m[{a[r-1],primes[rrr]}];
            else
                ans+= m[{a[r-1],primes[rrr]}]-m[{a[l-2],primes[lll-1]}];
	    cout<<ans<<"\n";
	}

	//cout<<primes.back();

//--------------------------------------------------------------------------------------

	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}
