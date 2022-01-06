//wap to input numbers from user while user choice 1 and print sum of all number
#include<stdio.h>
void main()
{
	int num,sum=0,ch;
	do{
		printf("enter a numbers :");
		fflush(stdin);
		scanf("%d",&num);
		sum=sum+num;
		printf("addition is :%d\n",sum);
		printf("do you again want to add :press 1:");
		fflush(stdin);
		scanf("%d",&ch);
	}while(ch==1);
}
	

