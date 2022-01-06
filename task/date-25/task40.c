#include<stdio.h>
void main()
{
	int i,var;
	printf("Enter a number");
	scanf("%d",&var);
	for(i=20;i>=var;i--)
	{
		printf("%d \n",i);
	}
}
