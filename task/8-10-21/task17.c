//wap to unique value
#include<stdio.h>
void main()
{
	int arr[10],i,j,count=0;
	printf("enter 10 value :");
	for(i=0;i<=9;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<=9;i++)
	{
		count=0;
		for(j=i+1;j<=9;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count==0)
		printf("  the unique: %d",arr[i]);
	}
}
