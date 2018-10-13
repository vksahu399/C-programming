# include<stdio.h>
void main()
{
	int a,b,GCD,i;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a&&i<=b;++i)
	{
		if(a%i==0&&b%i==0)
		GCD=i;
	}
	printf("GCD of %d & %d is %d",a,b,GCD);
}
