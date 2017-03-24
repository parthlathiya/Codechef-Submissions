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
	freopen("XENTASK_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		int N;
        cin >> N;
        ll a[N],b[N];

        forall(i,0,N)
            cin>>a[i];
        forall(i,0,N)
            cin>>b[i];
        ll ans1=0,ans2=0;
        forall(i,0,N)
        {
                if(i%2){ans1+=a[i];ans2+=b[i];}
                else {ans1+=b[i];ans2+=a[i];}
        }
        cout << miN(ans1,ans2) << endl;
    }
return 0;
}
