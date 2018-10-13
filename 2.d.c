#include<stdio.h>
void main ()
{
	int p,n;
	float si,r;
	printf("enter the values of p,n&r");
	scanf("%d%d%f",&p,&n,&r);
	si=p*r*n/100.0;
	printf("simple interest is %f",si);
}
