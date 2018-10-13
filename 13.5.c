#include<stdio.h>
# include<math.h>
int factorial(int num)
{
    int fact=1;
    for(num; num>=1; num--)
        fact= fact*i;
    return fact;
}
int main()
{
    int i,N;
    float sum,c;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    sum=0.0f;
    for(i=1;i<=N;i++)
	c=(float)(x*pow(-1,i))/factorial(i*2+1);	
        sum=sum+c;
    printf("Sum of the series is: %f\n",sum);     
    return 0;
}
