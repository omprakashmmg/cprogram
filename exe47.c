
//wap to find multiplication all number where last digit of number 3 within 1 to n
#include<stdio.h>
void main()
{
	int i,n,multi=0,rem;
	scanf("%d",&n);
	while(i<=n)
	{
		rem=i%10;
		if(rem%2==0)
		multi=multi*i;
		i=i+1;
		
	}
	printf("%d",multi);
}
