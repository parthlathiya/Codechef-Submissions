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
int N,Q;
 
s(N);
s(Q);

ll b,min,max,A[N],i;

sl(b);
min=b; 
max=b;

forall(i,0,N-1)
{
	sl(A[i]);
	min=miN(A[i],min);
	max=maX(A[i],max);
}

ll temp;
	
while(Q--)
{
	sl(temp);
	if(temp>=min && temp<=max) 
		printf("Yes\n");
	else
		printf("No\n");
}

return 0;
} 