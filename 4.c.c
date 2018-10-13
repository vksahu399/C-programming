#include<stdio.h>
void main ()
{
	int SA;
	float DA,HRA,GS;
	printf("enter the salary of person");
	scanf("%d",&SA);
	DA=(20/100.0)*SA;
	HRA=(25.0/100)*SA;
	GS=DA+SA+HRA;
	printf("gross salary is %f",GS);
}
