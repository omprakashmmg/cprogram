/* 
for(i1;i<=6;i=i+2){
for(j=1;j<=4;j++){
i=?,j=?
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=6;i=i+2)
	{
for(j=1;j<=4;j++)
{
printf("%d",i);	
}
printf("\n");
}
/*result j=1234
1234
1234
i=
1111
3333
5555
*/
}
