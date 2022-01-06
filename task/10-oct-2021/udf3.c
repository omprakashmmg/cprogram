//wap  with a udf add two number
#include<stdio.h>
void add(int a,int b)//passing with argument
{
	printf("result =%d\n",(a+b));
}
void main()
{
	int a,b;
	printf("enter two number :\n");
	scanf("%d%d",&a,&b);
	
	add(a,b);//calling of function
}
