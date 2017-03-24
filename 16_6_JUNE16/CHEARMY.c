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
ll T;
sl(T);
while(T--)
{
	ll K;
	sl(K);
    ll bck=K;
    int arr[5]={0,2,4,6,8};
    ll i,j;
	int dig;
	int ans[100];
	K--;
		for(i=0;i!=((int)ceil(log(bck)/log(5)));i++)
		{
			dig=K%5;
			ans[i]=arr[dig];
			K/=5;
		}
for(j=i-1;j>=0;j--)
{
	printf("%d",ans[j]);
}
if(bck==1)printf("0\n");else printf("\n");
}
return 0;
}