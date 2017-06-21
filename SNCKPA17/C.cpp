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
#define ite iterator
#define maxlong 9223372036854775808
#define diff(a,b) max(a,b)-min(a,b)


/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/


char a[2][500];
// char vis[2][500]={0};
struct myy { int vis[2][500]; };

ll n;
ll counter;
ll ans;
void dfs(int i,int j,ll l,myy aa)
{
	// cout<<counter<<" "<<l<<" "<<i<<" "<<j<<endl;
	if(l+1==counter)
	{ans=1;
		// cout<<l;
		return;}
	aa.vis[i][j]=1;
	if(j>0 && a[i][j-1]=='#' && aa.vis[i][j-1]!=1)
		dfs(i,j-1,l+1,aa);
	if(j<n-1 && a[i][j+1]=='#' && aa.vis[i][j+1]!=1)
		dfs(i,j+1,l+1,aa);
	if(i>0 && a[i-1][j]=='#' && aa.vis[i-1][j]!=1)
		dfs(i-1,j,l+1,aa);
	if(i<1 && a[i+1][j]=='#' && aa.vis[i+1][j]!=1)
		dfs(i+1,j,l+1,aa);
}


int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("C_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

s(t);
while(t--)
{

	cin>>n;
	ll p=0,q=0;
	myy aa;
	// int vis[2][500]={0};
	counter=0;ans=0;
	rep(i,0,n){
		cin>>a[0][i];
		if(a[0][i]=='#')counter++;
		aa.vis[0][i]=0;
		
	}
	rep(i,0,n){
		cin>>a[1][i];
		if(a[1][i]=='#')counter++;
		aa.vis[1][i]=0;

	}
	// cout<<counter;
	ll flag1=0;
	// ,temp1,temp2;
	rep(i,0,2)
	{
		rep(j,0,n)
		{
			ll cnt=0;
			if(a[i][j]=='#')
			{
				// temp1=i,temp2=j;
				if(j>0 && a[i][j-1]=='#')
					cnt++;
				if(j<n-1 && a[i][j+1]=='#')
					cnt++;
				if(i>0 && a[i-1][j]=='#')
					cnt++;
				if(i<1 && a[i+1][j]=='#')
					cnt++;
			}
			if(cnt==1)
			{
				flag1=1;p=i;q=j;break;
			}
		}
	if(flag1)break;
	}	
	// cout<<p<<q;
	if(flag1==0)
	{
		rep(i,0,2)
		{
			rep(j,0,n)
			{
				ll cnt=0;
				if(a[i][j]=='#')
				{
					// temp1=i,temp2=j;
					if(j>0 && a[i][j-1]=='#')
						cnt++;
					if(j<n-1 && a[i][j+1]=='#')
						cnt++;
					if(i>0 && a[i-1][j]=='#')
						cnt++;
					if(i<1 && a[i+1][j]=='#')
						cnt++;
				}
				if(cnt==2)
				{
					flag1=1;p=i;q=j;break;
				}
			}
		if(flag1)break;
		}	
	}
	dfs(p,q,0,aa);
	// int flag=0;
	// rep(i,0,2)
	// 	rep(j,0,n)
	// 		if(vis[i][j]==0 && a[i][j]=='#')
	// 		{
	// 			flag=1;break;
	// 		}
	//
	 	if(ans==0)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
}


//  --------------------------------------------------------------------------------------

return 0;
}
