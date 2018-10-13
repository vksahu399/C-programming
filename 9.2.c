# include<stdio.h>
void main()
{
	int fact=1,i,num;
	printf("enter the num");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",num,fact);
}
