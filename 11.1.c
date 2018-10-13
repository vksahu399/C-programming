# include<stdio.h>
void main ()
{
	int num,num1,a,c=0,i,sum=0;
	printf("enter the 3 digit number");
	scanf("%d",&num);
	num1=num;
	for(num;num>=0;num--)
	{
	num=num/10;
	c++;
    }
    num=num1;
	for(i=1;i<=c;i++)
	{
	    a=num%10;
	    sum=sum+a;
	    num=num/10;
    }
	printf("addition of digit is %d",sum);
}
