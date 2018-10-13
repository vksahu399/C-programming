# include<stdio.h>
int parendrome(int num)
{
	int num1,rem=0,sum=0;
	num1=num;
	while(num>0)
	{
	rem=num%10;
	sum=sum*10+rem;
	num=num/10;
    }
	if(sum==num1)
	printf("%d is PALINDROME \n",num1);
	else if(sum!=num1)
	printf("%d is not PALINDROME \n",num1);
}
int even(int num)
{
	(num%2==0)?printf("even \n"):printf("odd \n");
}
int prime(int num)
{
	int i,flag=0;
	while(i<=num/2)
	{
	if(num%i==0)
	flag=1; 
	break;
	}
	i++;
	if(flag==0)
	printf("%d is prime no \n",num);
	else
	printf("%d is not prime no \n",num);
}
int perfect(int num)
{
	int j,sum=0;
	while(j<=num/2)
	{
	if(num%j==0)
	sum=sum+j;
	j++;
	}
	if(sum==num)
	printf("%d is perfect \n",num);
	else
	printf("%d is not perfect \n",num);
}
void main()
{
	static int n,ch1,b;
	int ch2;
	printf("enter the number of n & ch1");
	scanf("%d%d",&n,&ch1);
	do
	{
		switch(ch1)
		{
			case 1:
			    b= parendrome(n);
			    break;
			case 2:
			    b=even(n);
			    break;
			case 3:
				b=prime(n);
				break;
			case 4:
				b=perfect(n);
				break;
			default:
			printf("invalid input");	
		}
		printf("press 1 for continue \n");
		scanf("%d",&ch2);
		main(1);
	}while(ch2==1);
}
