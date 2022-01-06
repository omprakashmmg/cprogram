//when we have to count something in loop
//wap to count haw many  numbers are divisble by 3 within 1 to n
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter last value of series :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		count++;
	}
	printf(" total values divided by 3 is =%d \n",count);
}
