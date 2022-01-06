//wap to print only 4 for even number within a given series
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter a starting of series :");
	scanf("%d",&i);
	printf("enter a last of series :");
	scanf("%d",&n);
	
	for( ;i<n;i++)
	{
		if(i%2==0)
			printf("%d",i);
		
			
		
	
		count++;
	
	if(count==4)
      break;
		}
	}

