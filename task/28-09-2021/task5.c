
//wap to ask to input gender first char (m/f)from 10 users and count haw many female haw many male present here
#include<stdio.h>
void main()
{
	int i,n;
	char malecount=0,femalecount=0;
	printf("enter a value :");
	
	for(i=1;i<=10;i++)
	{
		scanf("%c",&n);
		fflush(stdin);
		if(n=='m'||n=='M')
		{
			malecount++;
		}
		if(n=='f'||n=='F')
		{
			femalecount++;
			
		}
	
	}
		printf("male count value =%d\n",malecount);
		
		printf("female count value =%d\n",femalecount);
}
