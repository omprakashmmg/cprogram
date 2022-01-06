//wap to find square -root without (math.h)headerfile and without using opratore,and loop
#include<stdio.h>
double pow(double ,double);
void main()
 
{
	float n;
	printf("enter a number :");
	scanf("%f",&n);
	printf("the square root=%f",pow(n,0.5));
}
