
//wap to read 10 numbers from key word and count number of positive negative and zero are present here
#include<stdio.h>
void main()
{
	int i,n,pos=0,neg=0,zero=0;
	printf("enter a number:");

	for(i=1;i<=10;i++)
	{
			scanf("%d",&n);
		if(n>0)
		{
			pos++;
		}if(n<0)
		{
			neg++;
			
		}if(n==0)
		{
			zero++;
		}
	}
	printf("positive=%d",pos);
	printf("negative=%d",neg);
	printf("zero=%d",zero);
}
