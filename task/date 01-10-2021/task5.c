//wap to find table of 1 to 5 
#include<stdio.h>
void main()
{
	int i=1,num;
	while(i<=5)
	{
		num=1;
		while(num<=10)
		{
			printf("%d\t ",i*num);
			num++;
			
			}
			printf("\n");
			i++;
		}
	}

