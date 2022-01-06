//wap to add two intiger value and two float value 
//void add(int a,int b)
//void fadd(float a,float)
#include<stdio.h>
void add(int a,int b)

{
	int res;
	
	res=a+b;
	printf("int value result is =%d",res);
}
void main()
{
	int n1,n2;
	printf("enter two int  value :");
	scanf("%d%d",&n1,&n2);
	add(n1,n2);
	
}
