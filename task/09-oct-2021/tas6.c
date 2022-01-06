// wap to find transpose of a matrix.

#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	printf("\nenter elemtn :");
	for(i=0;i<=2;i++)
	{
	  for(j=0;j<=2;j++)
	  {
	  		scanf("%d",&arr[i][j]);
	  }
	}
	printf("\nmatrix tranpose--------\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d  ",arr[j][i]);
		}
		printf("\n");
	}
}
