//jumping/branching stetement
//wap input a number and print number is even or odd till user input a negative number
#include<stdio.h>
void main()
{
int num;
start:
printf("enter a number :");
scanf("%d",&num);
if(num<0)
goto end;
if(num%2==0)
printf("even \n");
else
printf("odd \n");	
goto start;
end:
	printf("###");
}
//wap to input multiple value from user and find sum of all value untill user input a negative value
//wap to  input number and print factoriyal of o
