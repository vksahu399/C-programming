# include<stdio.h>
void main ()
{
	int num,a,b,c;
	printf("enter the 3 digit number");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	printf("addition of digit is %d",a+b+c);
}
