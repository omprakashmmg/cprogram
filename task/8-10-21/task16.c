//wap to asscending order
#include<stdio.h>

void main()
{
	int a[10],i,j,temp=0;
	printf("enter 10 element :\n");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
					a[i]=a[j];
					a[j]=temp;
			}
		}
	}
	for(i=0;i<=9;i++)
	printf("  assending=  %d",a[i]);
		
	
}
