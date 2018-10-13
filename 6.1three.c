# include<stdio.h>
void main ()
{
	int a,b,c,num;
	printf("enter the 3 digit number");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	printf("reverse number is %d%d%d",a,b,c);
}
