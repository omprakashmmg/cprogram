//wap to find program to display odd number between given range
#include<stdio.h>
void main()
{
		int i,var;
	printf("Enter  a number : ");
	scanf("%d",&var);
	for(i=1;i<=var;i++ )
	{
		if(i%2){
				printf("%d\n",i);
		}
	
	}
}

