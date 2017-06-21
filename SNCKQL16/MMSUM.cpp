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
	freopen("MMSUM_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

ll t,n;
cin>>t;
while(t--)
{
	cin>>n;
	ll a[n];
	rep(i,0,n)
		cin>>a[i];
	ll suf1,suf2,sub;

	suf2=a[0];
	suf1=max(a[0]+a[1],a[1]);
	sub=max(a[0],suf1);

	rep(i,2,n)
	{
		sub=max(max(sub,suf1+a[i]),suf2+a[i]);
		suf2=suf1;
		suf1=max(a[i],suf1+a[i]);
	}

	cout<<sub<<endl;

}

//  --------------------------------------------------------------------------------------

return 0;
}
