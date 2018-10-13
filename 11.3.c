# include<stdio.h>
# include<math.h>
void main()
{
	int c,num,sum,a,num1;
	for(num=1;num<100;num++)
	{
		sum=0;
		c=0;
		num1=num;
		while(num>0)
		{
			num=num/10;
			c++;
		}
		num=num1;
		while(num>0)
		{
			a=num%10;
			sum=sum+pow(a,c);
			num=num/10;
	    }
	    num=num1;
	    if(sum==num)
	    printf("%d is armstrong \n",num);
	}
}
