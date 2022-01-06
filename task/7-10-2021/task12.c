/*
for(i=1;i<=5; )
{
}
}
result=
1111
3333
5555
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i=i+2)
	{
		for(j=1;j<=4;j++)
		{
			
			printf("%d",i);
		}
		printf("\n");
	}
}
