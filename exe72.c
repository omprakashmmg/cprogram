//wap to find all prime number from 1 to 50
#include<stdio.h>
void main()
{
	
	int i,j;
	for(i=2;i<=50;i++)
	{
		for(j=2;j<=(i/j);j++)
		if(!(i%j))
		break;
		if(j>(i/j))
		{
			printf("%d=this is prime number\n",i);
		}
	}
}
