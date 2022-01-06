//int checkpolindrome(int num)//return 0 if polidrome 1 if not polindrome
//wap with fallowing udf
//void checkpolindrome(int num)

#include<stdio.h>
int checkpolindrome(int a)
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
	return 0;
}else
return 1;
}
void main()
{
	int value;
	printf("enter a number check polindrome :");
	scanf("%d",&value);
	printf(" polindrome is =%d",checkpolindrome(value));
}
