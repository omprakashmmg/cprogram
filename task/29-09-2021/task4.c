//wap to input a number and count haw many digits is even and odd number 
#include<stdio.h>
void main()
{
	int num,ocount=0,ecount=0,digit;
	printf("enter a number : ");
	scanf("%d",&num);
	ecount=ocount=0;
	while(num!=0){
	
	digit=num%10;
	if(num%2==1)
		ocount++;
		
	else
			ecount++;
		num=num/10;

	

}
	printf("odd digit :%d even digit  :%d ",ocount,ecount);
}
