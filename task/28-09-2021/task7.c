
//wap to print digit all digit of number in seprate number
#include<stdio.h>
void main()
{
	int num=0,i;
	printf("enter a value :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i>0)
		{
			i=num%10;
		num=num/10;
		
		printf("%d\n",i);
		
			
		}
		
	}
}
