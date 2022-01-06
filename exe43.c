
//wap to print series as given below
//5,8,13,20
#include<stdio.h>
void main()
{
	int i=5,n=1;
	while(i<=20)
	{
		printf("%d,",i);
		n=n+2;
		i=i+n;
	}
}
