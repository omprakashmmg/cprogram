#include<stdio.h>
void main()
{
	int a,b,c,choice;
	printf("enter your choice \n :");
	printf("1.addition \n2.subtraction \n3.mulplication \n 4.division \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
				printf("enter two number :");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf(" your addition is :%d",c);
			
			break;
			
		case 2:
				printf("enter two number :");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf(" your subtraction is : %d",c);
			
			break;
			
		case 3:
				printf("enter two number :");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf(" your multipliition is :%d",c);
			
			break;
			
		case 4:
			printf("enter two number :");
			scanf("%d%d",&a,&b);
			c=a/b;
			printf(" your division is :%d",c);
			
			break;
			default:
				printf("your  value is invalid");
				break;
	}
}

