//wap input a number and print only odd digit of a number
#include<stdio.h>
void main()
{
	int num,rem,digit;
	printf("enter a digit:");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		num=num/10;
		rem=digit%2;
		if(rem!=0){
			printf(" the odd digit = %d\n",digit);	
		}
	}

}
