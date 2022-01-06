//wap a loop where updation is not fixed
//3,6,10,15,21
#include<stdio.h>
void main(){

int i,n=2;
printf("the value is :");
for(i=3;i<=21;i=i+n)
{
	n=n+1;
printf("%d \n",i);	
}
}
