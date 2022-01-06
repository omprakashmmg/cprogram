//wwap to read 5 values from user and count total positive and negative number present
#include<stdio.h>
void main(){
	int i,n,p=0,neg=0;
	printf("enter any 5 number");
	for(i=1;i<=5;i++)
	{
		
		scanf("%d",&n);
		if(n>0)
		{
		p=p+1;	
		}else if(n<0){
		neg++;	
		}
		printf("postive=%d ,negative=%d",p,neg);
		
	}
}
