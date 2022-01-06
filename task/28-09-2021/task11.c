
//wap to count number of digit  of a number
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter any number :");
	scanf("%d",&n);
    for(i=0;i<=n;i++)
{
	while (n!=0)
	{
	
n=n/10;
  count++;
}
	}
	printf("the count of digit=%d",count);
}

