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
	freopen("CATSDOGS_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		int C,D,L;
        cin >> C;
        cin >> D;
        cin >> L;
        if (L%4==0)
        {
            if (C>(2*D))
            {
                if ((C+D)>=(L/4) && (L/4)>=(C-D))
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
            else
            {
                if ((C+D)>=(L/4) && (L/4)>=D)
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
        }
        else
            cout<<"no"<<endl;
    }
return 0;
}
