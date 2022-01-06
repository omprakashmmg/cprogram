//wap using switch case stetement make a project atm,
/*
withrol
deposit

*/
#include<stdio.h>
#include<conio.h>


	long amount=1000,deposit,withdraw;
	int choice,pin,k;
	char transection='y';
	void main(){
	
	while(pin!=1111)
	
	{
	
		printf("enter your secret pin:");
		scanf("%d",&pin);
		if(pin!=1111)
		printf("please enter valid password\n");
	}do{
		printf("**********welcome to ATM service*********\n");
		printf("1.check balence\n");
		printf("2.withdraw cash\n");
		printf("3.deposite cash\n");
		printf("4.quit\n");
		
		printf("**************************************\n");
		printf("enter your choice :\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
					system("cls");
				printf("\n your balence is :%lu",amount);
				break;
				case 2:
						system("cls");
					printf("enter the amount to withraw :\n");
					scanf("%lu",&withdraw);
					if(withdraw%100!=0)
					{
						printf("please enter your amount to multiple of 100");
						
					}else if(withdraw>(amount-500))
					{
						printf("\n insufficient balence\n");
						
					}else{
						amount=amount-withdraw;
						printf("\n please collect your balence\n");
						printf("your current balence is:%lu",amount);
					}
					break;
					case 3:
							system("cls");
						printf("enter to amount to deposite\n");
						scanf("%lu",&deposit);
						amount=amount+deposit;
						printf("your balence is:%lu",amount);
						break;
						case 4:
								system("cls");
							printf("thank you using atm\n");
							break;
							
							default:
								printf("\ninvalid choice\n");
							}
								printf("\ndo you  wish to have another transecation[y|n]:\n");
								fflush(stdin);
								scanf("%c",&transection);
								if(transection=='n')
								k=1;
								
							
		
	}	while(!k);
	
		
		printf("\n\n thank for using our atm service");
	
	
}

	
	



