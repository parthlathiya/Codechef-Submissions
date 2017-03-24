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
	char A[1000001],B[1000001];
	ss(A);
	ss(B);
 int l = strlen(A);
 int *array1 = malloc(sizeof(int)*l);
 int *array2 = malloc(sizeof(int)*l);
 ll i;
 for(i = 0; i < l; i++)
 {     array1[i] = A[i]-'0';
      array2[i] = B[i]-'0';
 
 }
    int one=1,zero=0;
	ll ch10=0,ch01=0;
	for(i=0;l!=0;i++,l--)
	{
		one &= array1[i];
	    zero |= array1[i];
		if(array1[i] != array2[i])
		{	
			if(array1[i]==1)
				ch10++;
			else
				ch01++;
		}
	}
//printf("%d %d\n",ch01,ch10);

	if( (one==0 && zero==0) || (one==1 && zero==1) )
		printf("Unlucky Chef\n");
	else 
		printf("Lucky Chef\n%d\n",maX(ch01,ch10));
}
return 0;
} 