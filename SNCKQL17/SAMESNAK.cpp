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
	freopen("SAMESNAK_in.txt","r",stdin);
#endif
 
//  --------------------------------------------------------------------------------------
 
ll t;
cin>>t;
while(t--)
{
	ll x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	// cin>>n;
	// x1+=1000000000;
	// y1+=1000000000;
	// x2+=1000000000;
	// y2+=1000000000;
	// x3+=1000000000;
	// y3+=1000000000;
	// x4+=1000000000;
	// y4+=1000000000;
	char l1,l2;
	if(x1==x2)
		l1='v';
	else
		l1='h';
	if(x3==x4)
		l2='v';
	else
		l2='h';
	
	if(l1=='h' && l2=='h')
	{
		if(y1==y3)
		{
			if(max(min(x1,x2),min(x3,x4))>min(max(x1,x2),max(x3,x4)))
				cout<<"no"<<endl;
		 	else
				cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
	}
	else if(l1=='v' && l2=='v')
	{
		if(x1==x3)
		{
			if(max(min(y1,y2),min(y3,y4))>min(max(y1,y2),max(y3,y4)))
				cout<<"no"<<endl;
		 	else
				cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
	}
	else if(l1=='h' && l2=='v')
	{
		if(y3==y4)
		{
			if(y1==y3 && min(x1,x2)<=x3 && x3<=max(x1,x2))
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		else if(x1==x3 || x3==x2)
		{
			if(x1==x3 && (y1==y3 || y1==y4))
				cout<<"yes"<<endl;
			else if(x2==x3 && (y2==y3 || y2==y4))
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		else
			cout<<"no"<<endl;
	}
	else 
	{
		if(y1==y2)
		{
			if(y1==y3 && min(x3,x4)<=x1 && x1<=max(x3,x4))
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		else if(x1==x3 || x1==x4)
		{
			if(x1==x3 && (y1==y3 || y2==y3))
				cout<<"yes"<<endl;
			else if(x1==x4 && (y1==y4 || y2==y4))
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		else
			cout<<"no"<<endl;
	}
 
}
	
 
//  --------------------------------------------------------------------------------------
 
return 0;
}