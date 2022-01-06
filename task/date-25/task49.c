//Write a program to display nthmultiplication table.
#include<stdio.h>
void main()
{
	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("the table is :%d*%d=%d \n ",n,i,n*i);
	}
}
