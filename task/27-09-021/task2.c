//wap to print fallowing stetement
//7,10,15,22,31,42
#include<stdio.h>
void main()
{
	int i,num=1;
	printf("the value is :");
	for(i=7;i<=42;i=i+num)
	{
		num=num+2;
	printf("%d\n",i);	
	}
	
}
