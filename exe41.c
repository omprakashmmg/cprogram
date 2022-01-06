//work on each digit of a number

#include<stdio.h>
void main()
{
	int num,sum=0,rem,count;
	printf("enter a 3 didgit number :");
	scanf("%d",&num);
	for(;num>0;num=num/10)
	{
		count++;
		rem=num%10;
		sum=sum+rem;
	}
	printf("%d\n",sum);
}
