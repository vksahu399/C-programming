# include<stdio.h>
# include<math.h>
void main()
{
	int c=0,num,sum=0,num1,a=0;
	printf("enter the value of num");
	scanf("%d",&num);
	num=num1;
	lable:
		num=num/10;
		c++;
		if(num>0)
		goto lable;
		lab:
			a=num%10;
			sum=sum+pow(a,3);
			num=num/10;
			if(num>0)
			goto lab;
			else
			if(sum==num)
			printf("%d is armstrong",num);
			else
			printf("%d is not armstrong",num);
}
