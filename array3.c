//wap to input 10 elements and search one value is present in array or not
#include<stdio.h>
void main()
{
	int arr[10],index,val;
	printf("enter 10 numbers :");
	for(index=0;index<=9;index++)
	{
		scanf("%d",&arr[index]);
	}
	printf("input a value search in array");
	scanf("%d",&val);
	for(index=0;index<=9;index++)
	{
		if(arr[index]==val)
		
	
		break;
	}
	printf("index is=%d\n",index);
	if(index==10)
	printf("this value not present in array");
else
	printf(" this is present in array");
}

