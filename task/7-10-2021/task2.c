/*
4444
333
22
1
*/
#include<stdio.h>
void main()
{
	int i,j,n=4;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
			++n;
		}
		printf("\n");
	}
}
