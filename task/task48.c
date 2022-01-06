/*Write a program to display each digits of a given number in  
        words. [Ex:Input:3452  Output: Three Four Five Two]*/


#include<stdio.h>
void main()
{
	int n,r,sum=0;
	printf("enter a number :");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=sum;
	while(n>0){
		r=n%10;
		switch(r)
		{
			case 1:
				printf("one \n");
				break;
					case 2:
				printf("two\n");
				break;
					case 3:
				printf("three\n");
				break;
			
					case 4:
				printf("four\n");
				break;
					case 5:
				printf("five\n");
				break;
					case 6:
				printf("six\n");
				break;
					case 7:
				printf("seven\n");
				break;
					case 8:
				printf("eight\n");
				break;
					case 9:
				printf("nine\n");
				break;
					case 0:
				printf("zero\n");
				break;
					default:
				printf("wrong value\n");
				break;
		}
		n=n/10;
	}
}
