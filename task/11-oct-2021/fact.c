//wap to get ncr value of a number by using udf
//NCR=factorial of n/(factorial of r*factorial of(n-r))//formula 
//int getfact(int num)
#include <stdio.h>
int getfact(int num)
{
 int fact=1,i;
 for(i=1;i<=num;i++)
 {
 	fact=fact*i;
 	
 }
 return fact;
	
}
void main()
{
	int n,r,ncr,factn,factr,factnr;
	printf("enter a number n :");
	scanf("%d",&n);
	printf("enter a number r: ");
	scanf("%d",&r);
	factn=getfact(n);
	factr=getfact(r);
	factnr=getfact(n-r);
	ncr=getfact(n)/(getfact(r)*(n-r));
	printf("ncr is=%d",ncr);
}
