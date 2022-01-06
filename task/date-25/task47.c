/*Write a program to find sum of all individual digits in a given 
        number.*/

#include<stdio.h>
void main()
{
	int n,r,sum=0;
	printf("enter a number :");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		sum=sum+r;
		n=n/10;
		
	}
	printf("sum=%d",sum);
}
