//wright a program square a number if value equal 5
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a value:");
	scanf("%d",&a);
	if(a==5||a==3){
		b=a*a;
		printf("square of a=%d",b);
		
	}else
	printf("value is wrong");
}
