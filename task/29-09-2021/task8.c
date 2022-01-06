//wap input a number and print only even digit of a number
#include<stdio.h>
void main()
{
	int num,rem;
	printf("enter a digit:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		 num=num/10;
		if(rem%2==0)
		{
			
		
		printf("%d",rem);
		}
	}


}
