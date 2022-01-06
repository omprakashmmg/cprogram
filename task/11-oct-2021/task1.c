//wap with fallowing udf
//void checkpolindrome(int num)
//int checkpolindrome(int num)//return 0 if polidrome 1 if not polindrome
#include<stdio.h>
void checkpolindrome(int a)
{
	int  num, rem,polin=0;
	num=a;
	

while(num!=0)
{

rem=num%10;
polin=polin*10+rem;
num=num/10;
}
if(polin==a)
{
	printf("this is polindrome :%d",a);
}else
printf("this is not polindrome :%d",a);
}
void main()
{
	int value;
	printf("enter a number check polindrome :");
	scanf("%d",&value);
	checkpolindrome(value);
}
