//wap to input 10 element of array and count given value is haw many times present in array
#include<stdio.h>
void main()
{
	int arr[10],i,count=0,num;
	printf("enter 10 value :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	
	}
		printf("enter the number  which want is  count:");
			scanf("%d",&num);
		for(i=0;i<=9;i++){
			if(arr[i]==num)
			count++;
	
		}
		printf("%d",count);
	}
	


