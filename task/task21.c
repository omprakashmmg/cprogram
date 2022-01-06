#include<stdio.h>
void main(){
	char ch;
	printf("enter a charectere : ");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("given charecter is alphabet");
	}else{
		printf("given value is not alphabet");
	}
}
