#include<stdio.h>
void main()
{
	char ch;
	printf("enter a charector  :");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("%c is lowercase",ch);
	}
	else{
		printf("%c alpha is not lowercase",ch);
	}
}
