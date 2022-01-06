//wap to print digit a number in  seprate line
void main()
{
	int num,rem,sum;
	printf("enter a number :");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		printf("%d\n",rem);
		sum=sum+rem;
	
	}
		printf("sum of=%d",sum);
 } 
