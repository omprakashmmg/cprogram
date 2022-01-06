//wap to input 10 element of array and print first present index of value in array
#include<stdio.h>
void main()
{
	int arr[10],i;
	printf("enter 10 number :");
	for(i=0;i<=9;i++) 
	{
		scanf("%d",&arr[i]);
	}
	printf("first present index :%d",arr[0]);
}
