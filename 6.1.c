# include<stdio.h>
void main()
{
	int num,sum=0,a;
	printf("enter the num");
	scanf("%d",&num);
	lable:
		a=num%10;
		sum=sum*10+a;
		num=num/10;
		if(num>0)
		goto lable;
		printf("%d",sum);
}
