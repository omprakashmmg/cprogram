//wap to input 10 elements and find sum of all
#include<stdio.h>
void main()
{
	int arr[10],i,sum=0;
	printf("enter 10 numbers  :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all number =%d",sum);
}
