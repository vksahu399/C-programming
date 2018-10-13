# include<stdio.h>
# include<math.h>
int fact(int num)
{
	int fact=1,i;
	for(i=0;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
void main()
{
	int num,i;
	float sum=0;
	printf("enter the no. of terms \n");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
        sum=sum+(pow(-1,i)*((i+1)*1.0))/fact(i*2+1);
	}
	printf("%f",sum);
}
