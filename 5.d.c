# include<stdio.h>
void main ()
{
	int a,b,c;
	printf("enter the three numbers");
	scanf("%d%d%d",&a,&b,&c);
	a>b&&a>c?printf("%d is greatest",a):b>a&&b>c?printf("%d is greatest",b):printf("%d is greatest",c);
}

