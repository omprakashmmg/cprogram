//wap to print cube of number by using udf
//void cube()
//void cube(int num)
#include<stdio.h>
void cube()
{
	int num,res;
	printf("enter a number :");
	scanf("%d",&num);
	
	res=num*num*num;
	printf(" res is= %d",res);
	
}
void main()
{
	cube();
}
