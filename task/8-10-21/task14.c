
//wap to input 3*3 matrixand printf "this is acceptble" if all element of matrix 0
#include<stdio.h>
void main()
{
	int matrix[3][3],row,col;
	for(row=0;row<=2;row++)
	{
		printf("enter some number for matrix :");
		for(col=0;col<=2;col++)
		scanf("%d",&matrix[row][col]);
	}
	
}
