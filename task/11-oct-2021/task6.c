/*int convert()*/
#include<stdio.h>
int convert()
{
	float res,rupee;
	 	
printf("enter a value for convert paisa :");
	 scanf("%f",&rupee);
	 res=rupee*100;
	 return res;
	 
}
void main()
{
	float r;
	r=convert();

	printf("%f",r);
}
