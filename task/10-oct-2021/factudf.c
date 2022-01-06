//wap to udf to find factorial number (without argument,and with argument)
//void getfact()
//void getfact(int num)
#include<stdio.h>
void  getfact(int num)
{
	int i,mul=1;
for(i=1;i<=num;i++)
{
	mul=mul*i;
}
printf("fact is=%d",mul);
	
}
void main()
{
	int a;
	printf("enter a number find factorial ");
	scanf("%d",&a);
	getfact(a);
}
