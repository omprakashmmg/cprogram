// question no.4
#include<stdio.h>
#define N 10
void main()
{
	float arr[N]={2,4,1,5,6,9,8,3,10,7};
	int i=1,j=3,k=2;
	printf("%.1f\n",arr[0]);
	printf("%.1f\n",arr[3]);
	printf("%.1f\n",arr[9]);
	printf("%.1f\n",arr[i*j+k]);
	printf("%.1f\n",arr[N-5]);
	printf("%.1f\n",arr[N-1]);

}
