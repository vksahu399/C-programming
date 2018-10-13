# include<stdio.h>
void main()
{
	int n,sum1,sum2,i;
	printf("enter the n");
	scanf("%d",&n);
	sum1=0;
	sum2=0;
    for(i=n;i>0;i--)
	{
		if(i%2==0)
	    sum2=sum2+i;
        else
	    sum1=sum1+i;
    }
	printf("sum of odd is %d",sum1);
	printf("sum of even is %d",sum2);
}
