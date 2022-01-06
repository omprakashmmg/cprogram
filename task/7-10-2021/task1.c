/*
1 2 3 4
1 2 3
1 2 
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
			n--;
			printf("  %d",j);
		}
		printf("\n");
	}
}
