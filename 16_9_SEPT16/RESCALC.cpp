#include <bits/stdc++.h>

using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

bool waytosort(int i,int j){return i>j;}
int main()
{

#ifndef ONLINE_JUDGE
	freopen("RESCALC_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		int n;//no of players
		cin>>n;
		ll pt[n];
		ll max,temp,winner;
		forall(i,0,n)
		{
			int nc;//no of cookies
			int a[6]={0};
			//std::array<int, 6> a = {0};
			cin>>nc;
		//	cout<<"nc"<<nc;
			forall(j,0,nc)
			{
				cin>>temp;
				//cout<<"temp"<<temp;
				a[temp-1]++;
			}
			//sort a
		//	forall(k,0,6) cout<<a[k]<<" ";	cout<<endl;
			sort(a, a + 6,waytosort);
//			forall(k,0,6)cout<<a[k]<<" ";	cout<<endl;
			pt[i]=nc+a[5]*4+(a[4]-a[5])*2+(a[3]-a[4]);
//			cout<<"pt"<< i <<" "<<pt[i] << endl;
			if(i==0)
			{
				max=pt[0];
				winner=0;
			}
			else
			{
				if(max<pt[i])
				{
					winner=i;
					max=pt[i];
				}
			}
		}
		sort(pt, pt + n,waytosort);
		if(pt[0]==pt[1])
			cout<<"tie"<<endl;
		else
		{
			if(winner==0)
				cout<<"chef"<<endl;
			else
				cout<<winner+1<<endl;
		}
	}
return 0;
}
