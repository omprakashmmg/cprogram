#include <stdio.h>
#include <conio.h>
void main()
{
int a, b, c, as, bs, cs, ac, bc, cc;

printf ("Enter any three numbers \n");
scanf ("%d%d%d",&a,&b,&c);
as=a*a;
bs=b*b;
cs=as*a;
ac=as*a;
bc=bs*b;
cc=cs*c;
printf ("Square of %d \n",a,as);
printf ("Square of %d \n", b, bs);
printf ("Square of %d \n",c ,cs);
printf ("Cube of %d \n", a, ac);
printf ("Cube of %d \n", b, bc);
printf ("Cube of %d \n", c, cc);
 }

