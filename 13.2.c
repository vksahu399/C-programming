# include<stdio.h>
int fact(int num)
{
	int fact=1,i;
	for(i=num;i>0;i--)
	{
		fact=fact*i;
	}
	return fact;
}
void main()
{
	int num;
	float sum=0;
	printf("enter the no. of terms \n");
	scanf("%d",&num);
	for(num;num>0;num--)
	{
        sum=sum+(float)num/fact(num);
	}
	printf("%f",sum);
}
