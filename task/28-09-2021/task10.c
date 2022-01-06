//wap to print sum of squre of all digit of a number
#include<stdio.h>
void main()
{
	int i,num,sum=0,rem;
	printf("enter any number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		while(num>0){
			
				rem=num%10;
		sum=sum+rem*rem;
		num=num/10;
		}
	printf("the sum of squre digit =%d\n",sum);
		
	
	}
}
