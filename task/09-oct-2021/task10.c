//8. wap to find the count of positive numbers ,negative numbers and zeros in the given list of n numbers.

#include<stdio.h>
void main()
{
	int arr[100],i,num,count1=0,count2=0,count3=0;
	printf("Enter a number max 100 : ");
	scanf("%d",&num);
	for(i=0;i<=num-1;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>0)
		count1++;
		if(arr[i]<0)
		count2++;
		if(arr[i]==0)
		count3++;
	}
	printf("count of positive number %d\n",count1);
	printf("count of negative  number %d\n",count2);
	printf("count of zeros number %d\n",count3);

	
}
