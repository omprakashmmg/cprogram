//void greatar(int a,int b)
#include<stdio.h>
void greater (int a,int b)

{
if(a>b)
printf("a is greater than b");
else
printf("b is graeter than a");
	
}
void main()
{
	int n1,n2;
	printf("enter a value :");
	scanf("%d%d",&n1,&n2);
	greater(n1,n2);
}
