#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007


int main()
{

#ifndef ONLINE_JUDGE
	freopen("CDVA1703_in.txt","r",stdin);
#endif

	ll T;
	cin>>T;
    ll temp=0;
	while(T--)
	{
		ll N,X;
        cin >> N >> X;
        temp += N%X;
    }
    cout << temp;
return 0;
}
