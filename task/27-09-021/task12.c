//multiply values within loop
//wap to find multiplication of all  numbers within 1 to 10
#include<stdio.h>
void main()
{
	int i,mul=1;
	printf("multiply :");
	for(i=1;i<=10;i++)
	{
		mul=mul*i;
		
	}
	printf("%d =%d",i,mul);
}
