//void series(starting value,ending value)
#include<stdio.h>
void evens(int stval,int endval)
{
	int i;
	for(i=stval;i<=endval;i++)
	{
		if(i%2==0)
		printf("even nuber =%d\n",i);
	}
}
void main()
{
	int a,b;
	printf("enter two value :");
	scanf("%d%d",&a,&b);
	evens(a,b);
}
