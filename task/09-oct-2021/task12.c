//7.  wap to find maximum and minimum in the given list of n numbers.
#include<stdio.h>
void main()
{
	int arr[100],i,num,max,min;
	printf("Enter a number max 100 : ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	
	for(i=0;i<=num;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	printf("max value is : %d\n min value is : %d",max,min);
	
}
