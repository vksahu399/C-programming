#include<stdio.h>
void main ()
{
	int a,b,c;
	printf("enter the values of a & b");
	scanf("%d%d",&a,&b);
	c=a+b;
	a=c-a;
	b=c-b;
	printf("after swaping a & b is %d %d",a,b);
}
