//wap  with a udf add two number
#include<stdio.h>
void add()//defnition of user define function
{
	int n1,n2;//local variable
	printf("enter two numbers :");
	scanf("%d%d",&n1,&n2);
	printf("result =%d",(n1+n2));
}
void main()
{
	add();//function calling udf
	printf("enter two number :")
	add();
	
}
