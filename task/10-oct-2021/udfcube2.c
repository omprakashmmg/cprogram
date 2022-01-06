//void cube(int num)
#include<stdio.h>
void cube(int num)
{
	int res;
	res=num*num*num;
	printf("result is =%d",res);
}
void main()
{
	int a;
	printf("enter a number :");
	scanf("%d",&a);
	cube(a);
}
