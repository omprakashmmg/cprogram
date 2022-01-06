//wap to find sum of even number,count of even numbers,sum of odd numberand count number  between 1 to 20
#include<stdio.h>
void main()
{
	int i,number,odd_sum=0,even_sum=0;
	printf("enter a number for increase value even or odd :\n");
	scanf("%d",&number);
	for(i=0;i<=number;i++)
	{
		if(i%2==0){
				even_sum=even_sum+i;
	}
	
else{
	odd_sum=odd_sum+i;
}

printf("\n the sum of even number upto =%d",even_sum);

printf("\n the sum of odd number upto =%d",odd_sum);
}
}
