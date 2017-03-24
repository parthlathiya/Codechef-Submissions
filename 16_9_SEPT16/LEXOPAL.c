#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
 
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%-1c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
 
#define fs(fp,n)                        fscanf(fp,"%d",&n)
#define fsc(fp,n)                       fscanf(fp,"%-1c",&n)
#define fsl(fp,n)                       fscanf(fp,"%lld",&n)
#define fsf(fp,n)                       fscanf(fp,"%lf",&n)
#define fss(fp,n)                       fscanf(fp,"%s",n)
 
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
//FILE *fp1; //
//fp1=fopen("in.txt","r"); //
 
ll n,i;
sl(n); //
char D[100001];
 
 
 
while(n--)
{
	ss(D); //
	ll len=strlen(D);
	if(len%2==0)
	{
		forall(i,0,len/2)
		{
			if(D[i]=='.')
			{
				if(D[len-1-i]=='.')
				{
					D[i]='a';
					D[len-1-i]='a';
				}
				else
				{
					D[i]=D[len-1-i];
				}
			}
			if(D[len-1-i]=='.')
			{
				if(D[i]=='.')
				{
					D[i]='a';
					D[len-1-i]='a';
				}
				else
				{
					D[len-1-i]=D[i];
				}
			}
		}
	}
	else
	{
		forall(i,0,len/2)
		{
			if(D[i]=='.')
			{
				if(D[len-1-i]=='.')
				{
					D[i]='a';
					D[len-1-i]='a';
				}
				else
				{
					D[i]=D[len-1-i];
				}
			}
			if(D[len-1-i]=='.')
			{
				if(D[i]=='.')
				{
					D[i]='a';
					D[len-1-i]='a';
				}
				else
				{
					D[len-1-i]=D[i];
				}
			}
		}
		if(D[len/2]=='.')
			D[len/2]='a';
	}
	forall (i,0,len/2)
	if(D[i]!=D[len-1-i])
		break;
	if(i==len/2)
		printf("%s\n",D);
	else
		printf("-1\n");
}
//fclose(fp1);//
return 0;
}