#include<stdio.h>
#include<math.h>
void main ()
{
	int a,b,c;
	float r1,r2;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	r1=(-b+pow(b*b-4*a*b*c,(1/2)))/(2.0)*a;
	r2=(-b-pow(b*b-4*a*b*c,(1/2)))/(2.0)*a;
	printf("root of the equation is%f and %f",r1,r2);
}
