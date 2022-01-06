//wap to  input number and print factoriyal of number untill user input value 0 or 1;
#include<stdio.h>
void main()
{
	int i=1, num;

    printf("enter a value");
    scanf("%d",&num);
    	start:
    		
    printf("enter a value");
    scanf("%d",&num);
    if(num>0) 

    {
    	i=i*num;
    	num--;
    	goto start;
	}
	printf("%d",i);
	
		printf("the value is invalid");
    
}
