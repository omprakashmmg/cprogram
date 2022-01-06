//wap print sum of all number between 1 to n where number divide by 3 is equal to 2
//wap to add all number from given series
//wap to print sum of all numbers where is number is not by three within 1 to n
//wap to add all even number n to 50
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf(" enter ending of range :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==2)
		sum=sum+i;
		{
			printf(" sum is  = %d \n",sum);
		}
	}
}
