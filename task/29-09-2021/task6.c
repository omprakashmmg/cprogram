
//wap to remove all  0 from a number as 3005009=359 
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int rem,rev=0,rnum=0;
	long int num,an;
	printf("enter a number :");
	scanf("%ld",&num);
	an=num;
	while(num>0)
	{
		rem=num%10;
		if(rem!=0)
		rev=rev*10+rem;
		num=num/10;
	}while(rev>0){
		rem=rev%10;
		rnum=rnum*10+rem;
		rev=rev/10;
		
	}
	printf("%ld\n",an);
	printf("%d",rnum);
}
