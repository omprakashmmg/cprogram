//wap to find gretest number within to number by using udf
//void greatar()
//void greatar(int a,int b)
#include<stdio.h>
void greater()
{
	int a,b;
	printf("enter value of check greater :");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("a is greater than b \n");
	else	
	printf("b is greate than a\n");
}

void main()
{
	greater();
}
