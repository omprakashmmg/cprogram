//wap count total number divisble by 3 and 5 and 7 within a series
#include<stdio.h>
void main()
{
	int i, num;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%3==0)
		
			printf("%d\n",i);
		{
			if(i%5==0)
				printf("%d\n",i);
				{
						if(i%7==0)
							printf("%d\n",i);
				}
		}
	}
}
