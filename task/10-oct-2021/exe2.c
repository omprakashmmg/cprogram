#include<stdio.h>
int add2number()
{
	int a,b;
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second  number :");
	scanf("%d",&b);
	return a+b;
}
int add3number()
{
	int c,res;
	printf("enter one number :");
	scanf("%d",&c);
	res=add2number()+c;
	return res;
	
}
void main()
{
	//int r;
	//r=add3number();
	printf(" res= %d",add3number());
	//enter  a choice (want to add 2 number or 3); 
}
