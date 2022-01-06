#include<stdio.h>
void main()
{
	int n,r,ncr,fact=1,i;
	printf("enter a number n :");
	scanf("%d",&n);
	printf("enter a number r: ");
	scanf("%d",&r);
	
	ncr=(n)/(r)*(n-r);
	printf("ncr is=%d",ncr);
}
