# include<stdio.h>
int fact(int num)
{
	int fact=1,i;
	for(i=num;i>0;i--)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
void main()
{
	int num,b;
	printf("enter the number");
	scanf("%d",&num);
	fact(num);
}
