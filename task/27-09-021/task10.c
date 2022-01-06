//wap to add all even number n to 50
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter a value :");
	scanf("%d",&n);
	for( i=n;i<=50;i++)
	{
		if(i%2==0)
		sum=sum+i;
		{
			printf(" the even num is%d =%d \n",i,sum);
		}
	}
}
