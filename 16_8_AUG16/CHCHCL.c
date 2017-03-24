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
	ll n,m;
	sl(n);
	sl(m);
if(((n*m)-1) % 2 ==0)
    printf("No\n");
	else
	printf("Yes\n");
}
return 0;
}