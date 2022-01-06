
//wap to check a number is armstrong number or not
#include<stdio.h>
#include<stdio.h>
void main()
{
	int i,num,rem,sum=0,temp;
	printf("enter a number :");
	scanf("%d",&num);
	temp=num;
	for(i=1;i<=num;i++)
	{
		while(num>0){
			rem=num%10;
			sum=sum+(rem*rem*rem);
			num=num/10;
		}if(temp==sum){
		printf("value is armastrong number");	
		}else{
	printf("value is not armastrong number");
		
		
	}	
	}
}
			
