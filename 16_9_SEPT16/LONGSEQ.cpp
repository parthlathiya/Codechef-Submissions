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
	freopen("LONGSEQ_in.txt","r",stdin);
#endif


	int T;
	cin>>T;
	char D[100001];
	while(T--)
	{
		char D[100001];
		ll o=0,z=0;

		cin >> D;
		forall(i,0,strlen(D))
			if(D[i]=='0')
				z++;
			else
				o++;
		if(z==1||o==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
return 0;
}
