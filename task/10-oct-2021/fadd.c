//void fadd(float a,float)
#include<stdio.h>
void fadd(float a,float b)
{
	float result;
	result=a+b;
	printf(" float add value=%f",result);
}
void main()
{
	float n1,n2;
	printf("enter two float value :");
	scanf("%f%f",&n1,&n2); 
	fadd(n1,n2);
}
