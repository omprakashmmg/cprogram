#include<stdio.h>
void main()
{
int amount,res,total;
printf("enter amount:");
scanf("%d",&amount);
if(amount<=1000)
{
	res=(amount*5)/100;
	printf(" your discount is : %d ",res);
	total=amount-res;
	printf("  your balence is :%d ",total);
}

else if(amount>=1001&&amount<=2000)
{
	res=(amount*10)/100;
	printf(" your discount is : %d \n",res);
		total=amount-res;
	printf("  your balence is :%d \n ",total);
		printf("please resive your bill and do payment ! thankyou \n");
	
}
else if(amount>=2001&&amount<=3000)
{
	res=(amount*15)/100;
	printf(" your discount is : %d \n ",res);
		total=amount-res;
	printf("  your balence is :%d\n ",total);
		printf("please resive your bill and do payment ! thankyou \n");
	
}
else if(amount>=3001&&amount<=4000)
{
	res=(amount*20)/100;
	printf(" your discount is : %d",res);
		total=amount-res;
	printf("  your balence is :%d \n ",total);
		printf("please resive your bill and do payment ! thankyou \n");
	
}
else if(amount>=4000)
{
	res=(amount*25)/100;
	printf(" your discount is : %d",res);
		total=amount-res;
	printf("  your balence is :%d \n ",total);
	printf("please resive your bill and do payment ! thankyou \n");
	
}
else{
	printf("value is wrong");
}
}
