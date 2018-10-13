# include<stdio.h>
void prime(int num)
{
	int i,flag=0;
	for(i=2;i<=num/2;i++)
	{
	    if(num%i==0)
	    flag=1;
    }
    if(flag==1)
    printf("%d is not prime no.",num);
    else
    printf("%d is prime no.",num);
}
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	prime(num);
}
