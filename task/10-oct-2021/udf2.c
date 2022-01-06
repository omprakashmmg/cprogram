//wap  with a udf add two number
#include<stdio.h>
void add(int a,int b)//passing with argument
{
	printf("result =%d\n",(a+b));
}
void main()
{
	printf("<-calling main function ->\n");
	add(23,35);//callin of function
}
