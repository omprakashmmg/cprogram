//wap to find factorial of number
#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("enter a value :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("%d=%d \n",i,fact);
	}
}
