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
	freopen("LEXOPAL_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		char D[12346];
		int flag=0;
		cin >> D;
		int len=strlen(D);
		int till;
		if(len%2==0)
			till=len/2;
		else
			till=(len+1)/2;

		forall(i,0,till)
		{
			if(D[i]=='.' && D[len-1-i]!='.')
				D[i]=D[len-1-i];
			else if(D[i]!='.' && D[len-1-i]=='.')
				D[len-1-i]=D[i];
			else if(D[i]=='.' && D[len-1-i]=='.')
			{
				D[len-1-i]='a';
				D[i]='a';
			}
			else if(D[i]!='.' && D[len-1-i]!='.' && D[i]!=D[len-1-i])
				flag=1;
		}
			if(flag==0)
				cout<<D<<endl;
			else
				cout<<"-1"<<endl;
	}
return 0;
}
