// 13.wap to find the sum of square of element in a given matrix.

#include<stdio.h>
void main()
{
	int arr[100][100],i,j,num,a,sum=0;
	printf("enter a number max 100 : ");
	scanf("%d",&num);
	printf("********************************* enter array of element*************************************\n");
	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<num;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	
	printf("********************************square of element********************************************\n");
	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<num;j++)
		{
			a=arr[i][j]*arr[i][j];
			printf("%d ",a);
		}
		printf("\n");
		
	}
	printf("=============================sum of square====================================================")
	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<num;j++)
		{
			sum=sum+arr[i][j]*arr[i][j];
				printf("%d\n",sum);
		}


		
	}
}
