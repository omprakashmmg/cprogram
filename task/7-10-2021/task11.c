/*
	*		*		*		*		*		*
		*		*		*		*		*
			*		*		*		*
				*		*		*
					*		*
						*
						*/
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=6;i>=1;i--)
	{
		for(k=1;k<=(6-i);k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

