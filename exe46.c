//wap to check the number is polindrome or  not
#include<stdio.h>
void main()
{
	int num,sum=0,rem,temp;
	printf("enter a number to check polindrome :");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;//extract of digit fro ones
		num=num/10;//delete last digitof num
		sum=sum*10+rem;
		
	}if(temp==sum)
	printf("the value is polindrome=%d",sum);
	else
	printf("value is not polindrome =%d",sum);
	
}
