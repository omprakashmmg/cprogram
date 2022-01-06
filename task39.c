//wap to check number a prime number or not
#include<stdio.h>
void main()
{
	int i,num,count=0;
	printf("enter a number :");
	scanf("%d",&num);

	for(i=2;i<=num;i++)
	{
	
	if(num%i==0)
		count++;
	
		
	 
}
	if(count==0)
    
	
		printf("=%d the number is prime number \n",num);	
	else
		printf(" %d=number is not prime number\n",num);
	

	
	}
	
	

