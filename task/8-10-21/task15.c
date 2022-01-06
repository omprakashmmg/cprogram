//wap to 10 element desending order
#include<stdio.h>
#define n 10
void main()
{
	int a[n],i,j,temp=0;
	printf("enter 10 value :");
	for(i=0;i<=9;i++)
	
		scanf("%d",&a[i]);
		//let,s arrenge desending 
		for(i=0;i<=9;i++)
		{
			for(j=i+1;j<=9;j++)
			{
				if(a[j]>a[i])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		
	}
	for(i=0;i<=9;i++)
	printf("  %d\n",a[i]);
}
