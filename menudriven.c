//wap in c choice in odd loop and menu driven program
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int choice;
	int exit;
	int no1,no2;
	do{
	
	printf("~~~ menu wise calculator~~~\n");
	printf("1.for addition press 1\n");
	printf("2.for subtraction press 2\n");
	printf("3.for miltiply press 3\n");
	printf("4.for division press 4\n");
	printf(" press opration:\n");
	scanf("%d",&choice);
switch(choice){

	default:
		printf("invalid choice");
		break;
		case 1:
			system("cls");
			printf("-*-*-perform addition-*-*-\n");
			printf("enter first no:\n");
			scanf("%d",&no1);
				printf("enter second no:\n");
			scanf("%d",&no2);
			printf("the result=%d",(no1+no2));
			break;
			case 2:
			system("cls");
			printf("-*-*-perform substraction-*-*-\n");
			printf("enter first no:\n");
			scanf("%d",&no1);
				printf("enter second no:\n");
			scanf("%d",&no2);
			printf("the result=%d",(no1-no2));
			break;
			case 3:
			system("cls");
			printf("-*-*-perform multiplication-*-*-\n");
			printf("enter first no:\n");
			scanf("%d",&no1);
				printf("enter second no:\n");
			scanf("%d",&no2);
			printf("the result=%d",(no1*no2));
			break;
			case 4:
			system("cls");
			printf("-*-*-perform division-*-*-\n");
			printf("enter first no:\n");
			scanf("%d",&no1);
				printf("enter second no:\n");
			scanf("%d",&no2);
			printf("the result=%d",(no1/no2));
			break;
		}
		printf("\n Do you want exit[y|n]:");
		fflush(stdin);
		scanf("%c",&exit);
		system("cls");

		}
        while(exit=='n');
}

