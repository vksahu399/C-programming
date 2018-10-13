# include<stdio.h>
void main()
{
	int a=0,b=1,c,d,e;
	printf("enter the no. of series");
	scanf("%d",&d);
	do{
		c=a+b;
		b=a;
		b=c;
		
		d--;
	}while(d>0);
	printf("%d",c);
}
