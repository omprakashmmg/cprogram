/*
--------
*****
** **
*   *
----------
*/
#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=5;i>=3;i--)
	{
		for(j=3;j<=i;j++)
		{
			printf("*");
			++n;
		}
		printf("\n");
	}
}
