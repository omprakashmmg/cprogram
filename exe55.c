//wap to find even and odd in switch stetement
#include<stdio.h>
void main()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	switch(num%2)
	{
		case 0:
			printf(" this is even number");
			break;
			case 1:
				printf(" this is odd number");
				break;
	}
}
