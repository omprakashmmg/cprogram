//wap to store 5 subject mark of a student and find total marks,by using array
#include<stdio.h>
void main()
{
	
	int marks[5],i,sum=0;
	printf("enter 5 subject marks :");
	//scanf("%d%d%d%d%d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
	for(i=0;i<=4;i++)
	{
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
}
	
	printf("total=%d",sum);
//	printf("second subject mark is :%d",marks);
}
