# include<stdio.h>
int fact(int num)
{
	if(num==1)
	return 1;
	else
	return num*fact(num-1);
}
void main()
{
	int num,b;
	printf("enter the value of num");
	scanf("%d",&num);
	b=fact(num);
	printf("factorial of no. is %d",b);
}

