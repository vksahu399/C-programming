#include<stdio.h>
void main ()
{
	float f,c;
	printf("enter temperature in fohrenheit");
	scanf("%f",&f);
	c=(float)5/9*(f-32);
	printf("temperature in celsius %f",c);
}
