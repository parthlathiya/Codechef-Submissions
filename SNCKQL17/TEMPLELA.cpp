#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define sll std::set<ll>
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define pb push_back
#define mod 1000000007

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("TEMPLELA_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	ll h[n];
	rep(i,0,n)
		cin>>h[i];

	if(n%2==0)
		{
			cout<<"no"<<endl;
			continue;
		}	
		if(h[0]!=1 || h[n-1]!=1)
		{
			cout<<"no"<<endl;
			continue;
		}
		int flag=0;
		rep(i,1,(n+1)/2)
			{
				if(h[i]!=i+1){flag=1;break;}	
}
if(!flag){
	rep(i,(n+1)/2,n-1)
			{
				if(h[i]!=n-i){flag=1;break;}	
}	
}

if(flag)
		cout<<"no"<<endl;
	else
			cout<<"yes"<<endl;
	
}


//  --------------------------------------------------------------------------------------

return 0;
}
