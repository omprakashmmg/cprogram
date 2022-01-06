//wap to find the count of positive and negative numbers and zero given in the matrix
#include<stdio.h>
void main()
{
int arr[100],i,num,count1=0,count2=0,count3=0;
printf("enter the number max 100 :");
	scanf("%d",&num);
for(i=0;i<=num;i++)
{

		scanf("%d",&arr[i]);	
	if(arr[i]>0)
	count1++;
	if(arr[i]<0)
	count2++;
	if(arr[i]==0)
	count3++;
}
printf(" the positive count is= %d\n",count1);
printf(" the negative count is= %d\n",count2);
printf(" the zero count is= %d\n",count3);
}
