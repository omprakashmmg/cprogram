//wap to print all even number a series by using udf
//void series()
//void series(starting value,ending value)
#include<stdio.h>
void evens()
{
	int i,stv,endv;
	printf("enter starting value :");
	scanf("%d",&stv);
	printf("enter ending value :");
	scanf("%d",&endv);
	for(i=stv;i<=endv;i++)
	{
		if(i%2==0)
	printf("the  even value =%d\n",i);	
	}
	
}
void main()
{
	evens();
}
