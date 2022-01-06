//wap to input 10 element and find sum of two sequential elements
#include<stdio.h>
void main()
{
	int arr[10],i,result[5],pos=0;
	printf("enter a number :");
	for(i=0;i<=9;i++) 
	{
	
	scanf("%d",&arr[i]);
}
for(i=0;i<=9;i=i+2)
{
	result[pos]=arr[i]+arr[i+1];
	pos++;
}
printf(" all addition result=");
for(i=0;i<=4;i++)
{
	printf("%d\n",result[i]);
}
	}

