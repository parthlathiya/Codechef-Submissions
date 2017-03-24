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
	freopen("ARH1703_in.txt","r",stdin);
#endif

	int T;
	cin>>T;
    while(T--)
	{
        int a[3][3];
        ll k;
        int i,j;
        forall(i,0,3)
            forall(j,0,3)
                cin >> a[i][j];
        cin >> k;

        int temp[3][3],ba[3][3],c[3][3];
        forall(i,0,3)
            forall(j,0,3)
            {
                ba[i][j]=a[i][j];
                temp[i][j]=a[i][j];
            }
        forall(i,1,k)
        {
            forall(i,0,3)
                forall(j,0,3)
                {
                    c[i][j] = 0;
                    forall(k,0,3)
                        c[i][j] += a[i][k]*ba[k][j];
                }
            forall(i,0,3)
                forall(j,0,3)
                    a[i][j]=c[i][j]%10;

            forall(i,0,3)
                forall(j,0,3)
                    temp[i][j]= temp[i][j]%10 + a[i][j]%10;
        }
        forall(i,0,3)
        {
            forall(j,0,3)
                cout << temp[i][j]%10 << " ";
            cout << endl;
        }
cout << endl;
}
return 0;
}
