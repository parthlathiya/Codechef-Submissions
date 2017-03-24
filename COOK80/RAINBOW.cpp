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

if(r==0)
    return r+b-p;
if(b==0)
    return p;
char pick;
if(p==0)
    return b;
else if(p==r+b)
    return r;
//else if(r==b)
//    pick='t';
else
    pick=r>b?'r':'b';
if(pick=='r')
{
    return ((r/(r+b))*(1.0+solve(r-1,b,p-1)))+((b/(r+b))*(solve(r,b-1,p-1)));
}
else if(pick=='b')
{
    return ((r/(r+b))*(solve(r-1,b,p)))+((b/(r+b))*(1.0+solve(r,b-1,p)));
}

}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("RAINBOW_in.txt","r",stdin);
#endif

	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        forall(i,0,n)
            forall(j,0,n)
                cin>>a[i][j];
        int ans=n;
        forall(i,0,n)
        {
            forall(j,0,n)
            {
                int flag=1,ff=1,p;
                forall(k,0,n)
                {
                    if(ff && j!=k && a[j][k]!=-1){p=a[j][k];ff=0;}
                    if(!ff && j!=k && a[j][k]!=-1 && a[j][k]!=p){flag=0;break;}
                }
                if(flag)
                {
                    int temp=0;forall(k,0,n){if(a[j][k]!=-1)temp=1;a[j][k]=-1;a[k][j]=-1;}
                    //del row j and col j;
                    if(temp)ans--;
                }
            }
            //cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
