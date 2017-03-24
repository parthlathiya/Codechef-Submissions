#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

bool mf(ll i,ll j){return i<j;}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("DWNLD_in.txt","r",stdin);
#endif

        ll T;
        cin>>T;
        while(T--)
        {
            ll n,k;
            cin >>n>>k;
            ll ans=0;
            forall(i,0,n)
            {
                ll t,d;
                cin>>t>>d;
                if(t>k){
                    ans=ans+(t-k)*d;
                    k=0;
                    }
                else
                    k=k-t;
            }
            cout<<ans<<endl;
        }
        return 0;
}
