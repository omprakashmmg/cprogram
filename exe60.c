
//wap to print only 5 number that divisble by 3 and 5 both withen a given series
#include<stdio.h>
void main()
{
	int num,i,count=0;
	printf("enter a number :");
	scanf("%d",&num);
	for( ;i<=num;i++)
	{
		if(i%3==0)
		{
		
		count++;
		printf("divisble by 3 num=%d\n",i);
	}
	
		if(i%5==0){
	
		
		
			count++;
		printf("divisble by 5 num=%d\n",i);
	}	
}
}
	

