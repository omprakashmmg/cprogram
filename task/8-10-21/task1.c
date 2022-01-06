//wap to find greatest number within 10 element of array
#include<stdio.h>
void main()
{
	int arr[10],i,j,greates=0;
	printf("enter 10 number :");
	for(i=0;i<=9;i++)
	{
	
		
		scanf("%d",&arr[i]);
	}
			greatest=arr[0];
		
		for(i=0;i<=9;i++)
		{
			if(arr[i]>greatest)
			{
				greatest=arr[i];
			}
		}
					printf("the greatest of =%d\n",greatest);

	}

