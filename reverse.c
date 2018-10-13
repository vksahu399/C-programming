# include<stdio.h>
void main()
{
	int num,num1,sum=0,a;
	printf("enter the num");
	scanf("%d",&num);
	lable:
		num1=num;
		a=num%10;
		sum=sum*10+a;
		num=num/10;
		if(num>0)
		goto lable;
		if(sum==num1)
		printf("%d",sum);
		else
		printf("%d is not",sum);
}
