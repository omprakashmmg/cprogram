//wap to store 5 subject marks of five student and find sum of mark all student
#include<stdio.h>
void main()
{
	int marks[5][5],row,col,sum=0;
	for(row=0;row<=4;row++)
	{
		printf("enter of 5 student subject marks\n",row+1);
	
		for(col=0;col<=4;col++)
			scanf("%d",&marks[row][col]);
		
	}
	for(col=0;col<=4;col++)
	{
		sum=sum+marks[row][col];
		
	}
	printf("the sum of all student =%d",sum);
	
}
