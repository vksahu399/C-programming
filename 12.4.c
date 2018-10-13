# include<stdio.h>
void main()
{
	int i,j,k=65;
	for(i=65;i<=68;i++)
	{
		for(j=68;j>i;j--)
		{
			printf(" ");
		}
		k=65;
		for(j=i+1;j>66;j--)
		{
			printf("%c",k);
			k++;
		}
		for(j=i;j>=65;j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
