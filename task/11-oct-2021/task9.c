//wap program arrenge asscending order
#include<stdio.h>
void arrengearray(int num[])
{
	int temp=0,i,j;
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(num[j]<num[i])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("ascending order of array element :%d\n",num[i]);
	}
}
void main()
{
	int arr[10],i;
	printf("enter  10 element of array :\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	arrengearray(arr);
}
