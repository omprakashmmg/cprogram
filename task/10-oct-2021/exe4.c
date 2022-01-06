//wap to print last element of array by using udf
#include<stdio.h>
void lastelement(int arr[])
{
	printf("last element of array is :%d",arr[9]);
}
void main()
{
	 int  a[10],i;
	printf("enter 10 element of array :");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	lastelement(a);
}

