//wap haw many number divisible by 3 and many from 5 within 1 to 50
#include<stdio.h>
void main()
{
	int i,pcount=0,ncount=0;
	
	for(i=1;i<=50;i++)
	{
		
		if(i%5==0)
		
			pcount++;
		  if(i%3==0)
			ncount++;
		
	
	}
		printf("the value is :\n",pcount);
		printf("the value 2 is :\n",ncount);
}
