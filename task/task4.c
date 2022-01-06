//wright to print of only number if 5 or 3
#include<stdio.h>
void main()
{
	int x,y;
	printf("enter a value:");
	scanf("%d",&x);
	if(x==5||x==3){
		y=x*x;
		printf("square of x=%d",y);
		
	}else
	printf("value is wrong");
}

