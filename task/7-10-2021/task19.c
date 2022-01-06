//wap program to find all prime number from 1 to 50
#include<stdio.h>
void main()
{
	int num,j,count;
	
	for(num=2;num<=50;num++)
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
