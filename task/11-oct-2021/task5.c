//4-void convert(float rupee)*/
#include<stdio.h>
void convert(float rupee)
{
float res;
res=rupee*100;	
printf("%f",res);
}
void main()
{
	float b;
	printf ("enter a number for convert paisa :");
	scanf("%f",&b);
   convert(b);
}

