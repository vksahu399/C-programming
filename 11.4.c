# include<stdio.h>
# include<math.h>
void main()
{
	int i,n,a=0,r,c=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{	
	    r=n%10;
	    a=a+r*pow(2,c);
	    n=n/10;
	    c++;
    }
	printf("%d",a);
}
