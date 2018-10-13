# include<stdio.h>
void main()
{
	int a[3][3],b[3][3],i,j,c[3][3],sum,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the 1st matrix element");
			scanf("%d",&a[i][j]);
			printf("enter the 2nd matrix element");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			for(k=0;k<=3;k++)
			{
			    sum=sum+(a[i][k]*b[k][j]);
		    }
		    c[i][j]=sum;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
