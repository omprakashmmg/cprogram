#include<stdio.h>
void main()
{
	int i=0;//initilization
	for(;;)
	{
		if(i>=11)//testing condition
		{
			break;
		}
		printf("hello %d",i);
		i++;//updation
	}
}
