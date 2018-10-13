# include<stdio.h>
void main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(j=i;j>0;j--)
		{
			printf("%d",k);
			k++;
		}
		for(j=1;j<i;j++)
		{
			printf("%d",k-2);
			k--;
		}
		printf("\n");
	}
}
