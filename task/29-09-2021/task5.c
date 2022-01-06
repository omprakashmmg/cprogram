//wap to input a 2 digit a number and print tens digit and once digit as 45
#include<stdio.h>
void main()
{
int num,rem,sum=0,rem2=0;
printf("enter a number :");
scanf("%d",&num);
while(num>0)
{
	rem=num%10;
	sum=sum*10+rem;
	num=num/10;
}
	while(sum>0)
	{
	
	rem2=sum%10;
	printf("%d\n",rem2);
	sum=sum/10;
}
}

	

