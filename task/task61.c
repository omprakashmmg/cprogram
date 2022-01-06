/*write a program find of area circle,tringe and rectangle*/

#include<stdio.h>
void main()
{
	int x;
	float a,b,area;
	printf(" 1.enter area of circle !:\n");
	
	printf(" 2.enter area of tringle !:\n");
	
	printf(" 3.enter area of rectangle!:\n");
	printf("choose your choice :");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("enter circle redius: ");
			scanf("%f",&a);
			area=3.14;
			area=3.14*a*a;
			printf("%f",area);
			break;
				case 2:
			printf("enter tringle redius: ");
			scanf("%f %f",&a,&b);
			
			area=0.5*a*b;
			printf("%f",area);
			break;
			
				case 3:
			printf("enter circle rectangle: ");
			scanf("%f %f",&a,&b);
			
			area=a*b;
			printf("%f",area);
			break;
			
			
	}
}
