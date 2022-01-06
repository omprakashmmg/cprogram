//wap to 10 element of array and check a given value is haw many time present in 
//array and on which position
#include<stdio.h>
void main()
{
	int arr[10],i,num,count=0;
	printf("enter a two number :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	 } 
	 printf("enter a value which want to count :");
	 scanf("%d",&num);
	 for(i=0;i<=9;i++)
	 {
	 	if(arr[i]==num)
	 {
	 
	 count++;
	 printf(" position of value : %d\n",i);
}
}
printf(" count of  position number :  %d",count);
}
