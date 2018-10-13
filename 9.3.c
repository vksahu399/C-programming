# include<stdio.h>
void main()
{
	int num,i,table;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		table=num*i;
		printf("%d*%d=%d",num,i,table);
		printf("\n");
	}
	
}
