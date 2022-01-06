// 9. wap to find the sum of positive number and negative numbers in the given list of n numbers.
#include<stdio.h>
void main()
{
	int arr[100],i,num,sum1=0,sum2=0;
	printf("enter a  number max 100  ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
	scanf("%d",&arr[i]);
	if(arr[i]>0)
	sum1=sum1+arr[i];
	if(arr[i]<0)
	sum2=sum2+arr[i];


	}
	printf("sum of positive : %d\nsum of negative numbrers %d",sum1,sum2);
	// sum of even number 


}
