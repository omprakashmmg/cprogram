//wap to input a number and print sum of even digit and sum of odd digit
#include<stdio.h>
void main()
{
	int num,rem,sum2=0,sum1=0;
	printf("enter a digit:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==0)
	sum1=sum1+rem;
	else
	sum2=sum2+rem;
	num=num/10;
			printf(" the even sum : %d \nthe sum of odd : %d\n",sum1,sum2);
	 	
				
			}
			
		
		}
				
	


