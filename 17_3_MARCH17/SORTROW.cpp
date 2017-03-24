#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007


bool mf(ll i,ll j){return i>j;}


ll cost(ll a[], ll b[],int n)
{
ll ans=0;
    forall(i,0,n){
        forall(j,0,n)
        {
            if(a[i]==b[j])ans+=(j-i)*(j-i);
        }
    }
return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("SORTROW_in.txt","r",stdin);
#endif

		int N;
        cin >> N;
        ll a[N][N];
        ll bk[N][N];
        forall(i,0,N)
            forall(j,0,N)
            {
                cin>>a[i][j];
                bk[i][j]=a[i][j];
            }

        ll temp[N];
        forall(i,0,N)
        {
            sort(&a[i][0],&a[i][0]+N);
            ll c1,c2;
            c1=cost(bk[i],a[i],N);
            sort(a[i],a[i]+N,mf);
            c2=cost(bk[i],a[i],N);
//            cout<<c1<<c2;
            if(c2>c1)
            {
                sort(a[i],a[i]+N);
                forall(j,0,N)cout<<a[i][j]<<" ";
            }
            else
            {
                forall(j,0,N)cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
return 0;
}
