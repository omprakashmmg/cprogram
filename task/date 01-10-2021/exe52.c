//wap a program all even number within a given series only if number is less than 100
//wap to print only 5 number that divisble by 3 and 5 both withen a given series
#include<stdio.h>
void main()
{
	int i,n,count=0;
	
printf("enter a strating value :");
	scanf("%d",&i);
	printf("enter a last value :");
	scanf("%d",&n);
	for( ;i<=n;i++)
	{
		if(i%2==0)
		
	{
		count++;
	printf("%d \n",i);

}
if(count==100)
break;	
}
}

