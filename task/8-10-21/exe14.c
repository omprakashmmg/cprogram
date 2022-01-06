//wap to find subtraction of two given matrix
#include<stdio.h>
void main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int row,col;
	printf("enter number for a matrix :\n");
	for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
	{
	
	scanf("%d",&a[row][col]);
	
	}
	
}
	printf("enter number for  b matrix :\n");
	for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
		{
				scanf("%d",&b[row][col]);
		}
	}

	//subtraction of c matrix
for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
	{
		c[row][col]=a[row][col]-b[row][col];
}
}
printf("\n diffrence of two matrix a and b :");
for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
	{
		printf("%d\t",c[row][col]);
}
printf("\n");
}
}

