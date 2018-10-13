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
	int num,i,x;
	float c,sum=0;
	printf("enter the no. of terms \n");
	scanf("%d",&num);
	printf("enter the value of x \n");
	scanf("%d",&x);
	for(i=0;i<=num;i++)
	{
	c=(float)(x*pow(-1,i))/fact(i*2+1);	
        sum=sum+c;
	}
	printf("%f",sum);
}
