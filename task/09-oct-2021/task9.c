// 10. WAP to find the sum and count of even and odd number in the given list of n number.
#include<stdio.h>
void main()
{
	int arr[100],i,num,sum1=0,count1,sum2=0,count2;
	printf("Enter a number max 100 : ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		scanf("%d",&arr[i]);
		// even numbers sum and count
		if(arr[i]%2==0)
		{
			sum1=sum1+arr[i];
			count1++;
		}
		// odd numbers sum and count
		if(arr[i]%2==1)
		{
			sum2=sum2+arr[i];
			count2++;
		}
	}
	printf("sum of even number %d\ncount of even number %d\n",sum1,count1);
	printf("sum of odd numbers %d\ncount of odd numbers%d",sum2,count2);
}
