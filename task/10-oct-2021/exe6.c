//wap to find maximum number all 10 element of array by using udf
#include<stdio.h>
int maxvalue( int arr[])
{
	int i,max;
	max=arr[0];
	for(i=0;i<=9;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
	}
	return max;
}
void main()
{
	int a[10],i,b;
	printf("enter  10 element of array :");
for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	b=minvalue(a);
	printf("max value=%d",b);
	
}
