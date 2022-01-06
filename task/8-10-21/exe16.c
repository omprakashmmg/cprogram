//wap to find sum of squre of element in  a given matrix
#include<stdio.h>
void main()
{
	int arrA[10][10];
	
	
	int row,col,size;
	printf("enter the matrix size :");
	scanf("%d",&size);
	for(row=0;row<=size;row++)
	{
		for(col=0;col<=size;col++)
		{
				scanf("%d",&arrA[row][col]);

		}
	
}
//square proccess
	for(row=0;row<=size;row++)
	{
		for(col=0;col<=size;col++)
		{
		
		printf("%d ",arrA[row][col]*arrA[row][col]);
	   }
	   	printf("\n");

	}
	
}

