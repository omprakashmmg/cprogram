//wap to print fallowing stetement 
 //1,2,4,,7,11,16,22,............,n
 #include<stdio.h>
 void main()
 {
 int i,num,sum=0;
 printf("enter a number :");
 scanf("%d",&num);
 for(i=1;i<=num;i=sum+i)
 {
 	sum=sum+1;
 	
printf("%d=\n",i,sum);	
 }	
 }
