#include<stdio.h>
void main()
{
	int arr[10],i,v,count=0;
	printf("enter a number :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",arr[i]);
		for(i=0;i<=9;i++)
	}
	//let,s compaire value to the each index of array
	printf("enter the number for search :");
	scanf("%d",&v);
	
	printf("value is present at :");
	for(i=0;i<=9;i++)
	{
		if(arr[i]==v)
		{
			printf("%d",i+1);
			count++;
		}
		
	printf("value is present at :");
	printf("\n total %d and time %d present in array ",count,v);
	}
}
