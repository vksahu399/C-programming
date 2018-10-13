# include<stdio.h>
void main()
{
	int a=0,b=1,c,d,e;
	printf("enter the no. of series");
	scanf("%d",&d);
	d=d-2;
	do{
		c=a+b;	
		a=b;
		b=c;
		--d;
	}while(d>0);
    printf("%d",c);
}
