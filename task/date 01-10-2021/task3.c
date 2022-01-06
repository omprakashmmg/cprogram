
//wap to input multiple value from user and find sum of all value untill user input a negative value
#include<stdio.h>
void main()
{
	int num,sum=0;
	 execute:
	printf("enter a value :");
	scanf("%d",&num);
	if(num<0)
	goto exit;
	{
		
		printf("the sum of=%d\n",sum=sum+num);
		goto execute;
		exit:
		printf("neg value");	
	}

}
