//wap print sum of all number between 1 to n where number divide by 3 is equal to 2
 #include<stdio.h>
 void main()
 {
 	int i ,n,sum=0;
 
 	printf("enter a number :\n");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		if(i%3==2){
 			sum=i+sum;
 			printf("the all number is =%d\n",i);
 			
 			
 			
 		}
 		printf(" the total sum is=%d",sum);
		 }
	 }
 
