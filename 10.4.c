# include<stdio.h>
void main()
{
	int i,num,sum=0;
	printf("enter the number ");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
	    if(num%i==0)
		sum=sum+i;
	}
	if(sum==num)
	printf("%d is perfect \n",num);
	else
	printf("%d is not perfect",num);
}
