# include<stdio.h>
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("after swaping a & b are %d %d\n",*x,*y);
}
void main()
{
	int a,b;
	printf("enter the values of a & b\n");
	scanf("%d%d",&a,&b);
	printf("before swaping a & b are %d %d\n",a,b);
	swap(&a,&b);
	printf("after swaping a & b are %d %d\n",a,b);
}
