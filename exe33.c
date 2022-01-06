//loop where we have to work on multiple user inputed value 
//wap to ask value from user and print odd value
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter 5 values :");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&n);
		if(n%2==1){
			printf(" %d is odd number \n",n);	
		}
	
	}
}
