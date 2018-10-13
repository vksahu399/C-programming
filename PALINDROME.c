# include<stdio.h>
void main()
{
	int a,rem,sum=0;
	printf("enter the number");
	scanf("%d",&a);
	if(a>0)
	rem=a%2;
	sum=sum*10+a;
	a=a/10;
	if(a==sum)
	printf("%d is PALINDROME");
	else
	printf("%d is not PALINDROME");
}
