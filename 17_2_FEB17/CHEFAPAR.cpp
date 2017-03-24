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
	freopen("CHEFAPAR_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		int N;
        cin >> N;

        bool flag=true;
        ll ans=0;
        int t;
        forall(i,0,N)
        {
            cin >> t;
            if(t==0)
                flag=false;
            if(!flag)
            {
                if(t==0)
                    ans+=1100;
                else
                    ans+=100;
            }
        }
        cout << ans << endl;
    }
return 0;
}
