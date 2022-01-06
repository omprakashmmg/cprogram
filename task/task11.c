#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("enter the values of num1: num2:num3 \n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2&&num1>num3){
		printf("num1 is gretest than three\n");
		
	}
	else if(num2>num3&&num2>num1)
	{
		printf("num2 is gretest than three \n  ");
		
	}
	else if(num3>num1&&num3>num2)
	{
		printf("num3 is gretest than three \n");
	}
}
