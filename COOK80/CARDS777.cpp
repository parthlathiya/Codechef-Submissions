#include <bits/stdc++.h>
using namespace std;

#define forall(i,a,b)                for(int i=a;i<b;i++)
#define ll long long int
#define llu long long unsigned
#define vll vector<ll>
#define vllu vector<llu>
#define sll set<ll>
#define sllu set<llu>
#define pb push_back
#define mll map<ll,ll>
#define mllu map<llu,llu>
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define mod 1000000007


long double solve(long double r,long double b,long double p)
{

if(r<=b){swap(r,b);p=r+b-p;}

if(r==0)
    return b-p;
if(b==0)
    return p;
if(p==0)
    return b;
if(p==r+b)
    return r;
//else if(r==b)
//    pick='t';
// if(r>b)
// {
    return ((r/(r+b))*(1.0+solve(r-1,b,p-1)))+((b/(r+b))*(solve(r,b-1,p-1)));
// }
// else
// {
//     return ((r/(r+b))*(solve(r-1,b,p)))+((b/(r+b))*(1.0+solve(r,b-1,p)));
// }

}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("CARDS777_in.txt","r",stdin);
#endif

	int t;
    cin>>t;
    while(t--)
    {
        long double r,b,p;
        cin>>r>>b>>p;
        
        long double ans=p*(r/(r+b))+(r+b-p)*(b/(r+b));

        cout<<fixed<<setprecision(10)<<ans<<endl;

    }
    return 0;
}
