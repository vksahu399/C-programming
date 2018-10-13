# include<stdio.h>
void main()
{
	int i,j;
	for(i=4;i>0;i--)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(j=i;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
