/*
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
      
      */
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=(6-i);j++)
		{
			printf(" ");
			
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=(6-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
}
