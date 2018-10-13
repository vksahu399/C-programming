# include<stdio.h>
void main()
{
	int a=0,b=1,c=0,i,n;
	printf("enter the limit  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1)
		c=0;
		else
		c=a+b;
		a=b;
	    b=c;
	}
	printf("%d \n",c);
}
