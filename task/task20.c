#include<stdio.h>
void main()
{
	char ch;
	printf("enter a charector  :");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("%c is uppercase",ch);
	}
	else{
		printf("%c alpha is not uppercase",ch);
	}
}
