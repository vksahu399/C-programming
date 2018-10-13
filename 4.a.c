#include<stdio.h>
void main ()
{
	int x,y,z,r;
	printf("enter the value of x,y&z");
	scanf("%d%d%d",&x,&y,&z);
	r=x;
	x=y;
	y=z;
	z=r;
	printf("then %d%d%d",x,y,z);
}
