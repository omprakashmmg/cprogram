#include<stdio.h>
void main()
{
	int year;
	printf("enter a year to check it is leap or not\n");
	scanf("%d",&year);

	if(year%4==0)
	{
		printf(" yes it is a leap year");
	}else{
		printf("this is not leap year");
	}

}
