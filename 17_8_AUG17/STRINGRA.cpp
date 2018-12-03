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
#define mpll std::map<pll, ll>
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

// ll st[40000];
// ll a[100];

// void build(ll x,ll s,ll e)
// {
// 	if(s==e)
// 		st[x]=a[s];
// 	else
// 	{
// 		ll mid=(s+e)>>1;
// 		build(x<<1,s,mid);
// 		build((x<<1)+1,mid+1,e);
// 		st[x]=max(st[x<<1],st[(x<<1)+1]);
// 	}
// }

// void update(ll x,ll s,ll e,ll idx,ll y)
// {
// 	if(s==e)
// 		st[x]=y;
// 	else
// 	{
// 		ll mid=(s+e)>>1;
// 		if(s<=idx && idx<=mid)
// 			update(x<<1,s,mid,idx,y);
// 		else
// 			update((x<<1)+1,mid+1,e,idx,y);
// 		st[x]=max(st[x<<1],st[(x<<1)+1]);
// 	}
// }

// ll query(ll x,ll s,ll e,ll l,ll r)
// {
// 	if(l<=s && e<=r)
// 		return st[x];
// 	if(e<l || r<s)
// 		return 0;
// 	ll mid=(s+e)>>1;
// 	return max(query(x<<1,s,mid,l,r),query((x<<1)+1,mid+1,e,l,r));
// }

bool myf1(pll a,pll b)
{
	// if(a.ss==b.ss)
	// 	return a.ff<b.ff;
	return a.ss<b.ss;
}

bool myf2(pll a,pll b)
{
	if(a.ss==b.ss)
		return a.ff<b.ff;
	return false;
	// return a.ss<b.ss;
}

vpll v;
vpll temp;

ll ans[1234560];
		
ll calcmex(ll l,ll r)
{
	set<ll> s;
	rep(i,l+1,r)
		s.insert(ans[i]);
	ll Mex = 1;
 
    while (s.find(Mex) != s.end())
        Mex++;
 
    return (Mex);
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("STRINGRA_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	s(t);
	// build(1,0,n-1);
	while(t--)
	{
		s(n);
		s(m);
		ll a,b;
		v.clear();
		set<ll> sc;
		mpll mm;
		int flag1=0;
		re(i,m)
		{
			cin>>a>>b;
			v.pb({a,b});
			sc.insert(b);
			mm[{a,b}]=1;
			if(a>=b)flag1=1;
		}
			if(sc.size()!=n || sc.find(0)!=sc.end() || flag1){
			cout<<"-1\n";
			continue;
		}
		sort(v.begin(),v.end(),myf1);
		sort(v.begin(),v.end(),myf2);
		// for(auto aa:v)
		// 	cout<<aa.ff<<aa.ss<<endl;

		int fff=0;
		ll f,s;
		f=v[0].ff;
		s=v[0].ss;
		temp.clear();
		if(s!=f+1)temp.pb({f,s});

		if(v.size()>1)
		{
			for(ll i=1;i<v.size();i++)
			{
				if(v[i].ss==s)
				{
					if(v[i].ff!=f+1)
					{
						fff=1;
						break;
					}
					f++;				
				}
				else
				{
					if(v[i-1].ss!=v[i-1].ff+1){fff=1;
						// cout<<"67";
						break;}
					s=v[i].ss;
					f=v[i].ff;
					if(f>=s){fff=1;break;}
					if(s!=f+1)temp.pb({f,s});
				}
				// cout<<v[i].ff<<v[i].ss<<endl;
			}
		}
		else
		{
			cout<<"1\n";
			continue;
		}
		if(fff)
		{
			cout<<"-1\n";
			continue;
		}
		if(temp.empty())
		{
			re(i,n)
			{
				cout<<1;
				if(i==n-1)
					cout<<endl;
				else
					cout<<" ";
			}
			continue;
		}
		re(i,1234560)
			ans[i]=1;
		for(auto aa:temp){
			// cout<<aa.ff<<" "<<aa.ss<<endl;
			ans[aa.ss]=calcmex(aa.ff,aa.ss);
		}
// for(auto aa:v){
// 			// cout<<aa.ff<<" "<<aa.ss<<endl;
// 			ans[aa.ss]=max(ans[aa.ss],calcmex(aa.ff,aa.ss));
// 		}
		// ll ans[n+1];
		// ans[0]=1;
		// re(i,n)
		// 	ans[i+1]=1;
		// ll cnt[n+1];
		// re(i,n)
		// 	cnt[i+1]=0;
		// set<ll> so;
		// re(i,n+5)
		// 	so.insert(i+1);
		// ll curl=temp[0].ff;
		// ll curr=temp[0].ss;
		// for(ll i=curl+1;i<curr;i++){
		// 	cnt[ans[i]]++;
		// 	if(cnt[ans[i]]==1)
		// 		if(so.find(ans[i])!=so.end())so.erase(so.find(ans[i]));
		// }


		// for(auto aa:temp){

		// 		for(ll i=curr;i<aa.ss;i++){
		// 			cnt[ans[i]]++;
		// 			if(cnt[ans[i]]==1)
		// 				if(so.find(ans[i])!=so.end())so.erase(so.find(ans[i]));
		// 		}	
			

		// 	if(aa.ff<=curl)
		// 	{
		// 		for(ll i=aa.ff+1;i<=curl;i++){
		// 			cnt[ans[i]]++;
		// 			if(cnt[ans[i]]==1)
		// 				if(so.find(ans[i])!=so.end())so.erase(so.find(ans[i]));
		// 		}
		// 	}
		// 	else
		// 	{
		// 		for(ll i=curl+1;i<=aa.ff;i++){
		// 			cnt[ans[i]]--;
		// 			if(cnt[ans[i]]==0)
		// 				so.insert(ans[i]);
		// 		}	
		// 	}
		// 	if(!so.empty())ans[aa.ss]=*so.begin();

		// }

		ll idx[n+1];
		re(i,n)
			idx[i+1]=0;
		ll cntt=0;
		int flag=1;
		re(i,n)
		{
			// if(idx[ans[i+1]]==0)cntt++;
			// else
			cntt+=(i+1-idx[ans[i+1]]);
				idx[ans[i+1]]=i+1;
			for(ll j=idx[ans[i+1]];j<i+1;j++)
				if(mm[{j,i+1}]==0){flag=0;break;}	
			if(!flag)break;	
		}
		// cout<<cntt<<endl;
		if(flag!=1)
		{
			cout<<"-1\n";
			continue;
		}
		re(i,n){
			cout<<ans[i+1];
			if(i==n-1)
				cout<<endl;
			else
				cout<<" ";
		}


	}
//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}