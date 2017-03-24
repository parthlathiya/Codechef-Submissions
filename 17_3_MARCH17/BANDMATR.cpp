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
	freopen("BANDMATR_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		int N;
        cin >> N;
        int temp;
        ll one=0;
        forall(i,0,N)
            forall(j,0,N)
            {
                cin>>temp;
                if(temp)one++;
            }

//        cout<<one;
        forall(i,1,N+1)
        {
            temp=(2*i-1)*N-i*i+i;
//            cout<<"temp"<<temp<<"temp"<<endl;
            if(one<=temp)
            {
                cout<<i-1<<endl;
                break;
            }
        }
    }
return 0;
}
