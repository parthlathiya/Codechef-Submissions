#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define forallr(i,a,b)                for(int i=a-1;i>=b;i--)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007


struct frele
{
ll l;
ll r;
ll ele;
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("CDMN17A_in.txt","r",stdin);
#endif

        ll t;
        cin>>t;
//        n=pow(2,50)-1;
        while(t--)
        {
            ll n,k;
            cin>>n>>k;
            ll ans=0;
            forall(i,0,n)
            {
            ll tt;
            cin >>tt;
            ll temp=floor(tt/k);
            if(temp==0)
                ans+=k-tt;
            else
            ans=  ans + (tt-(temp*k) < ((temp+1)*k)-tt ? tt-(temp*k) : ((temp+1)*k)-tt);
//            cout<<ans<<endl;
}

        cout << ans << endl;

        }
        return 0;
}
