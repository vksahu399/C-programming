# include<stdio.h>
void add(int n1,int n2)
{
	int add;
	add=n1+n2;
	printf("%d+%d=%d \n",n1,n2,add);
}
void sub(int n1,int n2)
{
	int sub;
	sub=n1-n2;
	printf("%d-%d=%d \n",n1,n2,sub);
}
void main()
{
	int n1,n2;
	printf("enter the number");
	scanf("%d%d",&n1,&n2);
	add(n1,n2);
	sub(n1,n2);
}
