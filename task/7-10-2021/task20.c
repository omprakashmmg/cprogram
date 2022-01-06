//wap program to count and find all prime number from 1 to n given number
#include<stdio.h>
void main()
{
	int num,j,count,n;
	printf("enter a range :");
	scanf("%d",&n);
	
	for(num=2;num<=n;num++)
	{
		count=0;
		for(j=1;j<=num;j++)
		{
			if(num%j==0)
			count++;
		
		
		}
		if(count==2)
		{
			printf("%d= is prime number\n",num);
			
		}
	}
}
