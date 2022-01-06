#include<stdio.h>
void main()
{
int x,y,z,min;
x=2;
y=4;
z=1;
min=x<y && x<z ? x: y<z ? y : z;
printf("Minimum is : %d \n ",min);

}
//output=1
