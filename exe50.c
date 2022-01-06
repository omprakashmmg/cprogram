//wap input to number and print addition while user choice 1
#include<stdio.h>
void main()
{
	int n1,n2,ch;
	do{
		printf("enter two numbers :");
		fflush(stdin);
		scanf("%d%d",&n1,&n2);
		printf("addition is :%d\n",(n1+n2));
		printf("do you again want to add :press 1:");
		fflush(stdin);
		scanf("%d",&ch);
	}while(ch==1);
}
