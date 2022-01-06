//wap to get ncr value of a number by using udf
//NCR=factorial of n/(factorial of r*factorial of(n-r))//formula 
//int getfact(int num)
#include<stdio.h>
void main()
{
	int n,r,i,factn=1,factr=1,factnr=1,num,ncr;
	printf("enter value of n and r to calculat ncr :");
	scanf("%d%d",&n,&r);
	for(i=1;i<=n;i++)
	{
		factn=factn*i;
	}
	printf("factoriyal of n=%d",factn);
	for(i=1;i<=r;i++)
	{
		factr=factr*i;
		
	}
	printf("fact of r=%d",factr);
	for(i=1;i<=(n-r);i++)
	{
		factnr=factnr*i;
		
	}
	printf("fact of nr :%d",factnr);
	ncr=((n)/((r*( (n)-(r)))));
	printf(" ncr is :%d",ncr);
}
