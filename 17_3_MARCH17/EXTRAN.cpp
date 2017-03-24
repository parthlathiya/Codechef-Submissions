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
	freopen("EXTRAN_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		int N;
        cin >> N;
        ll a[N];

        forall(i,0,N)
            cin>>a[i];
        sort(a,a+N);

        forall(i,0,N-1)
        {
            if(a[i]!=a[i+1]-1)
            {
                if(i==N-2)
                {
                    cout<<a[i+1]<<endl;
                    break;
                }
                else
                {
                    cout<<a[i]<<endl;
                    break;
                }
            }
        }
    }
return 0;
}
