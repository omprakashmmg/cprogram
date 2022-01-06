#include<stdio.h>
int add1number()
{
	int a,b;
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second number :");
	scanf("%d",&b);
	return a+b;
	
}
int add2number()
{
	int c,res;
	printf("enter third number :");
	scanf("%d",&c);
	res=add1number()+c;
}
void main()
{
	int choice;
	printf("enter choice : ");
	printf("enter two number addition press 1\n:");
	printf("enter 3 number add press 2\n:");
	
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
	printf("result is two number :%d",add1number());
	
	break;
	case 2:
	printf(" enter is three number: result =%d ",add2number());
	break;
	default:
	printf("your choice wrong ");	
	}
}
