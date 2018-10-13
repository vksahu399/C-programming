# include<stdio.h>
void main()
{
	int num,sum=0,a,i;
	printf("enter the num");
	scanf("%d",&num);
    for(i=1;i<=num*10;i++)
    {
		a=num%10;
		sum=sum*10+a;
		num=num/10;
    }
		printf("%d",sum);
}
