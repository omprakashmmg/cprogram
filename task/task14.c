#include<stdio.h>
void main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a>0){
		printf("the number is positive");
	}else if(a<0)
	{
		printf("number is negative");
	}else if(a==0)
	{
		printf("number is zero");
	}
}
