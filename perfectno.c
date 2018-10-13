# include<stdio.h>
void main()
{
	int i,num,sum;
	for(num=1;num<100;num++)
	{
		i=1;
		sum=0;
		while(i<=num/2)
		{
			if(num%i==0)
			sum=sum+i;
			i++;
		}
		if(sum==num)
		printf("%d is perfect \n",num);
	}
}
