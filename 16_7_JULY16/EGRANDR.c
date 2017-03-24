#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
 
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%-1c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define ld long
#define mod 1000000007
#define P(x) printf("%d\n",x)
 


int main()
{
ll T;
sl(T);
while(T--)
{
	ll n,sum=0,i;
	int c1=0,c2=0;
	sl(n);
	forall(i,0,n)
	{
	    ll temp;
	    sl(temp);
	    if(temp==2)c1=1;
	    if(temp==5)c2=1;
	    sum+=temp;
	}
	if((sum/n)>=4 && c1==0 && c2==1)
	printf("Yes\n");
	else
	printf("No\n");
}
return 0;
} 