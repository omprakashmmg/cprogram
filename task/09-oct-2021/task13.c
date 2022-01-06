// 6.wap to find total and average of n given numbers and find the  numbers which are greater than the abverage.
#include<stdio.h>
void main()
{
	int arr[100],i,num,sum=0,avg,greater;
	printf("Enter a number max 100 : ");
	scanf("%d",&num);
	for(i=0;i<=num-1;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		avg=sum/num;
			
	}
				greater=avg;

	for(i=0;i<=num;i++)
	{
		if(avg>greater)
		greater=avg;
	
	}
	printf("sum of : %d\navg of : %d\ngrter of : %d",sum,avg,greater);
	
}
