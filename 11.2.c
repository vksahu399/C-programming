# include<stdio.h>
void main()
{
	int num,sum=0,a;
	printf("enter the num");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		sum=sum*10+a;
		num=num/10;
    	}
	printf("%d",sum);
}
