#include<stdio.h>
void main()
{
	int cube,n,sqr;
	 for(n=1; n<=10; n++)
	{
	sqr=n*n;
	  cube=n*sqr;
	printf("%d %d %d", n , sqr, cube);

}
}
//output=1 1 12 4 83 9 274 16 645 25 1256 36 2167 49 3438 64 5129 81 72910 100 1000
