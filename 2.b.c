#include<stdio.h>
void main ()
{
	int r;
	float A,C;
	printf("enter the radius");
	scanf("%d",&r);
	A=3.14*r*r;
	C=2*3.14*r;
	printf("area of circle is %f\n circumferance of circle is %f",A,C);
}
