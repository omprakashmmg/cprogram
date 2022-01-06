
//wap to reverse a number
#include<stdio.h>
void main()
{
	int i,num,rev=0,rem;
	printf("enter a number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num!=0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num/=10;
			
		}
	}
	printf("reverse number =%d",rev);
}
