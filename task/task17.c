#include<stdio.h>
void main()
{
int hi,en,sc,total;
printf("enter subject mark : ");
scanf("%d%d%d",&hi,&en,&sc);
 
 	total=(hi+en+sc)/3;
 if(total>=33)
 {
 	printf("student is pass");
 }
 else if(total<33){
 	printf("student is fail");
 	
 	
 }
}
