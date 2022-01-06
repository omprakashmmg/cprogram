//wap to print sum of all numbers where is number is not divisble by three within 1 to n
 #include<stdio.h>
 void main()
 {
 	int i ,n,sum=0;
 
 	printf("enter a number :\n");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		if(i%3!=0){
 			sum=i+sum;
 			printf("the all number is%d =%d\n",i,sum);
 			
 			
 			
 		}
 		
		 }
	 }
 
