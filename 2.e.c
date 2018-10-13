#include<math.h>
#include<stdio.h>
void main ()
{
	int p,r,t;
	float ci;
	printf("enter the values of p,r&t");
	scanf("%d%d%d",&p,&r,&t);
	ci=p*pow((1+r/100),t);
	printf("compound interest is %f",ci);
}
