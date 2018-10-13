#include<stdio.h>
void main ()
{
	int a,b;
	printf("enter the values of a & b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping a & b is %d %d",a,b);
}
