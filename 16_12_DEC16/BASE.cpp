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
	freopen("BASE_in.txt","r",stdin);
#endif

	int T;
	cin>>T;
//    int ss=-1;
	while(T--)
	{
		ll N;
//        ss++;
		cin >> N;
//		N=ss;
		ll ans=0;
		if(N==0)
        {

         cout <<"0"<<endl;
        continue;
        }
        else if(N==1)
        {
        cout<<"INFINITY"<<endl;
        continue;
               }
else{
    ans++;
    forall(i,3,N)
    {
    ll temp=floor(log(N)/log(i));
    if(N>=pow(i,temp) && N<2*pow(i,temp))
        ans++;
    }
//    cout << N << " " << i << " " << temp  << " " << ans<< endl;
    if(N>2)ans++;
    }
    cout << ans <<endl;
}
return 0;
}
