#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
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
ll n;
sl(n);
forall(i,0,n)sl(temp[i]);
forall(i,0,n)P(temp(i)+temp(i+1))
return 0;
} 