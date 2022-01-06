//Write a program to check whether the given number is prime
        //number or not.
#include<stdio.h>
void main()
{
	int n,i,m,sum=0;
	printf("enter a number :");
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++){
		if(n%i==0){
			
		}
		printf("number is not  prime");
		sum=1;
		break;
	}

    if(sum==0)
{
	printf("number is prime");
}
}
