#include<stdio.h>
void main()
{
int amount,res,total;
printf("enter amount:");
scanf("%d",&amount);
if(amount>=5000)
{
	res=amount/10;
	printf("%d",res);
}else{
	res=(amount*5)/100;
	total=amount-res;
	printf("%d",total);
}
}
