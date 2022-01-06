//wap to input all element of a 3*3 matrix and print all value in matrix form
#include<stdio.h>
void main()
{
	int mat[3][3],row,col;
	printf("enter 9 number  :\n");
	for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++){
			scanf("%d",&mat[row][col]);
		}
	}
	printf("the matrix is  :\n");
	for(row=0;row<=2;row++){
	for(col=0;col<=2;col++)
	{
		printf(" %d",mat[row][col]);
	}
	printf("\n");
	}
}
