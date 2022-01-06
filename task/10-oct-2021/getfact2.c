//void getfact(int num)
#include<stdio.h>
void getfact()
{
	int num,i,mul=1;
	printf("enter a num :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		mul=mul*i;
		printf("the fact is :%d",mul);
	}
}
void main()
{
	getfact();
}
