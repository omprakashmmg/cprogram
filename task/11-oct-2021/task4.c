//wap to convert rupees to paisa
/*int convert()
void convert()
int convert(float rupee)
3:-void convert(float rupee)*/
#include<stdio.h>
int convert(float rupee)
{
	float res;
	 
	 res=rupee*100;
	 return res;
	 
}
void main()
{
	float b,c;
printf("enter a value for convert paisa :");
	 scanf("%f",&b);
	 c=convert(b);
	 printf(" the paisa =%f",c);	
}
