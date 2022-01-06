//wap to find multiplicaton of all number that is divisble by 3 and 5 both within a series
#include<stdio.h>
void main()
{
	int i,num;
	printf("enter a number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%3==0 &&i%5==0)
		
		printf("the number is:%d \n",i);
		
			
		
	}
}
