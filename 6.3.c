# include<stdio.h>
# include<math.h>
void main()
{
	int num,num1,sum=0,rem,c=0;
	printf("enter the value of num");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
	}
	if(sum==num1)
	{
		printf("\n%d is a ARMSTRONG",num1);
	}
	else
		printf("\n%d is not ARMSTRONG",num1);
}
