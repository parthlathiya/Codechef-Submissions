#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define forallr(i,a,b)                for(int i=a-1;i>=b;i--)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007



int main()
{

#ifndef ONLINE_JUDGE
	freopen("CRES01_in.txt","r",stdin);
#endif

    int T;
    cin>>T;
    while(T--)
    {
        int n;
        int cr=0;
        cin>>n;
        int a[n];
        int m[n];
        forall(i,0,n)
        {
            cin>>a[i];
            cr=maX(cr,a[i]);
            m[i]=cr;
        }
        cr=0;
        int bk=m[n-1];
        forallr(j,n,0)
        {
            cr=maX(cr,a[j]);
            m[j]=cr;
            if(bk==a[j])
                break;
        }
        int ans=0;

//        forall(i,0,n)
//            cout<<m[i];

        forall(i,0,n)
            ans = ans + m[i]-a[i];

        cout<<ans<<endl;
    }
    return 0;
}
