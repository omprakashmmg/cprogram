//wap to find smallest number within 10 element of array
#include<stdio.h>
void main()
{
	int arr[10],i,j,smallest;
	printf("enter 10 number :");
	for(i=0;i<=9;i++)
	{
	
		
		scanf("%d",&arr[i]);
	}
			smallest=arr[0];
		
		for(i=0;i<=9;i++)
		{
			if(arr[i]<smallest)
			{
				smallest=arr[i];
			}
		}
					printf("the smallest of =%d\n",smallest);

	}
