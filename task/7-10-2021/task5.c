/*
66666
555
4
*/
#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=6;i>=4;i--)
	{
		for(j=4;j<=i;j++)
		{
			printf("%d",i);
			++n;
		}
		printf("\n");
	}
}
