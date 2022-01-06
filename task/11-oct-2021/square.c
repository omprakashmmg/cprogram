//wap to find squre in udf
#include<stdio.h>
int sqr( int num)
{
	return (num*num);
}
		void main()
		{
			int a,n;
			printf("enter a number :");
			scanf("%d",&a);
			n=sqr(a);
			printf("the square value is :%d",n);
		}
	

