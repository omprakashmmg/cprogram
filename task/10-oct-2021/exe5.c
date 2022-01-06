////wap to find minimum number all 10 element of array by using udf
#include<stdio.h>
int minvalue( int arr[])
{
	int i,min;
	min=arr[0];
	for(i=0;i<=9;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		
	}
	return min;
}
void main()
{
	int a[10],i,b;
	printf("enter  10 element of array :");
for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	b=minvalue(a);
	printf("min value=%d",b);
	
}
