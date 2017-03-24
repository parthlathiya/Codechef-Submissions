//#include <bits/stdc++.h>

//using namespace std;
//
//
//#define forall(i,a,b)                for(int i=a;i<b;i++)
//#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
//#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
//#define ll long long int
//#define llu long long unsigned
//#define mod 1000000007
//
//
//ll GG[100000001];
//
//ll M(unordered_set<ll> s)
//{
//    int st = 0;
//
//    while (s.find(st) != s.end())
//        st++;
//
//    return st;
//}
//
//ll G(ll n)
//{
//    if (n == 1)
//        return 0;
//
//    if(GG[n]!=-1)
//        return GG[n];
//    unordered_set<ll> s;
//    s.insert(G(n-1));
//
//    forall(i,2,n)
//    {
//    if(n%i==0)
//        s.insert(G(i));
//    }
//
//    return GG[n]=M(s);
//}
//
//
//int main()
//{
//
////#ifndef ONLINE_JUDGE
////	freopen("DIVGAME_in.txt","r",stdin);
////#endif
////
////	int T;
////	cin>>T;
//
////	while(T--)
////	{
////		ll n;
////		cin>>n;
//forall(n,0,100)
//{
//
//
//	cout<<n<<" ";	forall(i,0,n+1)
//            GG[i]=-1;
//		if(G(n)!=0)
//            cout<<"Mike"<<endl;
//        else
//            cout<<"Tom"<<endl;
//}
////	}
//return 0;
//}


#include <bits/stdc++.h>

using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

int C( int n )
{
	if ( n == 2 || n==17 ) return 1;
	if ( n == 16 || n == 34 || n == 289 ) return 0;
	for ( int i = 2; i * i <= n; i++ )
		if (!(n%i))
			return 1;
	return 0;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("DIVGAME_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		ll n;
		cin>>n;
		if(C(n))
            cout<<"Mikeeee"<<endl;
        else
            cout<<"Tommm"<<endl;
    }
return 0;
}








