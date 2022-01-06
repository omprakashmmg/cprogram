//wap to store 5 subject marks of 3 student of print sum of  mark of only second student 
#include<stdio.h>
void main()
{
	int marks[3][5],row,col,sum=0;
	for(row=0;row<=2;row++)
	{
			printf("enter 5 subject mark of student%d\n",row+1);
	for(col=0;col<=4;col++)

	scanf("%d",&marks[row][col]);	
	}
	for(col=0;col<=4;col++)
	{
		sum=sum+marks[1][col];
	}
	printf("  total marks of second %d",sum);
}
