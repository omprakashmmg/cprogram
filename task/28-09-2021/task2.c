
//wap to find multiplication all number where last digit of number 3 within 1 to n
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==3)
		
		printf("%d\n",i);
	}
}
