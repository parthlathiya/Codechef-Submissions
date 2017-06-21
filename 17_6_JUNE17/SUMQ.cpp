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
 
// bool myf(ll i,ll j){return i<=j;}
int main()
{
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	#ifndef ONLINE_JUDGE
		freopen("SUMQ_in.txt","r",stdin);
	#endif
 
 
//--------------------------------------------------------------------------------------
	
	s(t);
	while(t--){
		s(p);
		s(q);
		s(r);
		ll a[p];
		ll b[q];
		ll c[r];
		rep(i,0,p)
			cin>>a[i];
		rep(i,0,q)
			cin>>b[i];
		rep(i,0,r)
			cin>>c[i];
		sort(c,c+r);
		ll pc[r];
		pc[0]=c[0];
		rep(i,1,r)
			pc[i]=(pc[i-1]+c[i])%mod;	
		sort(b,b+q);
		ll bb[q];
		ll pb1[q],pb2[q];
 		ll totalsum1,totalsum2;
		rep(i,0,q)
		{
			ll temp=upper_bound(c,c+r,b[i])-c;
			// cout<<temp<<"t";
			bb[i]=(temp*b[i])%mod;
			if(temp>0)bb[i]=(bb[i]+pc[temp-1])%mod;
			if(i==0){
				pb1[i]=bb[i];
				pb2[i]=(bb[i]*b[i])%mod;
			}
			else{
				pb1[i]=(pb1[i-1]+bb[i])%mod;
				pb2[i]=(pb2[i-1]+(bb[i]*b[i])%mod)%mod;
			}
		}
		// rep(i,0,q)
		// cout<<pb1[q-1]<<pb2[q-1];
		ll ans=0;
		rep(i,0,p)
		{
			ll temp=lower_bound(b,b+q,a[i])-b;
			// temp=q-temp;
			// cout<<temp<<"t";
			if(temp>0) 
				ans= (ans + ((a[i]*(mod+pb1[q-1]-pb1[temp-1])%mod)%mod + (mod+pb2[q-1]-pb2[temp-1])%mod)%mod)%mod;
			else
				ans= (ans + ((a[i]*pb1[q-1])%mod + pb2[q-1])%mod)%mod;
		}
		cout<<ans<<"\n";
		
		// // brtueforce
		// ll ans1=0;
		// rep(i,0,p){
		// 	rep(j,0,q){
		// 		rep(k,0,r){
		// 			if(a[i]<= b[j] && b[j]>=c[k]){
		// 				// cout<<a[i]<<" "<<b[j]<<" "<<c[k]<<endl;
		// 				ans1+= ((a[i]+b[j])*(b[j]+c[k]));
		// 			}
		// 		}
		// 	}
		// }
		// cout<<ans1;
	
	}
	
//--------------------------------------------------------------------------------------
 
	return 0;
}