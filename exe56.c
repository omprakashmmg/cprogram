//wap to male on female based on(m/f)
#include<stdio.h>
void main()
{
	char gen;
	printf("enter a gender (m or f) :");
	gen=getchar();
	switch(gen)
	{
		case 'm':
			case 'M':
			printf("male");
			break;
			
		case 'f':
			case 'F':
			printf("female");
			break;
	}
}
