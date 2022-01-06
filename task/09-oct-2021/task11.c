//14. wap to find substratction of two given matrix.

#include<stdio.h>
void main()
{
	int arr1[10][10],arr2[10][10],arr3[10][10],num,i,j;
	printf("enter a number max 10 : ");
	scanf("%d",&num);
	printf("*****************************enter first matrix element*************************\n");
	
	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<=num-1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("***************************Enter second matrix element**************************\n");
	
	
	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<=num-1;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("******************************both matrix operation ********************************\n");
	
	
	
	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<=num-1;j++)
		{
			arr3[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	
	printf("*********************substraction of two matrix********************** : \n");
	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<=num-1;j++)
		{
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
	
	
}
