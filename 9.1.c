# include<stdio.h>
void main()
{
	int n,sum,i;
	printf("enter the n");
	scanf("%d",&n);
	sum=0;
	for(i=n;i>0;i--)
	{
	sum=sum+i;
    }
	printf("sum of %d nature no is %d",n,sum);
}
