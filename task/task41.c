#include<stdio.h>
void main()
{
	int i,fact,num;
	printf("enter a number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf(" factorial is %d: %d",num,fact);
}
