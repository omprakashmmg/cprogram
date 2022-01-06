// wap to delet elemet from the array of n element of at the  specified postion 

#include<stdio.h>
void main()
{
	int arr[100],num,i,pos;
	printf("enter a number : ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" enter deleting index value :");
	scanf("%d",&pos);
	
	// check valid postion 
	
	if(pos<0 || pos>num)
	{
		printf("invalid position : ");
	}
	else
	{
		for(i=pos-1;i<=num;i++)
		{
			arr[i]=arr[i+1];
			
		}
		i--;
		printf("after deleting an element :\n");
		for(i=0;i<=num;i++)
		{
			printf("%d\n",arr[i]);
		}
	}

 } 
