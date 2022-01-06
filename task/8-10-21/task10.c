//wap to input 10 element of array and print last present index of value in array
#include<stdio.h>
void main()
{
	int arr[10],i;
	printf("enter 10 number :");
	for(i=0;i<=9;i++) 
	{
		scanf("%d",&arr[i]);
	}
	printf("last present index :%d",arr[9]);
}
