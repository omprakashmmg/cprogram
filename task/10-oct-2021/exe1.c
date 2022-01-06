//return type function-:
//wap to UDF to add two numbers (udf shuld be return type and no passing parametar)
#include<stdio.h>
int addition()
{
	int a,b,res;
	printf("enter two numbers :");
	scanf("%d%d",&a,&b);
	res=a+b;
	return res;
}
void main()
{
	//int a,b;
	//printf("\n lenght of string =%d",printf("hello")); //function inside return value print
printf(" addition is = %d",addition());

}

