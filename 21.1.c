# include<stdio.h>
struct emp
{
	int id;
	char name[20];
	char dept[20];
	float sal;
};
void main()
{
	int n,i;
	struct emp e[5];
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the %d employee id :",i+1);
		scanf("%d",&e[i].id);
		fflush(stdin);
		printf("\n enter the %d employee name :",i+1);
		gets(e[i].name);
		printf("\n enter the %d employee department :",i+1);
		gets(e[i].dept);
		printf("\n enter the %d employee salary :",i+1);
		scanf("%f",&e[i].sal);
	}
	for(i=0;i<n;i++)
	{
		if(e[i].sal>50000.0)
		{
			puts(e[i].name);
			printf("\n %d : ",e[i].id);
			puts(e[i].dept);
			printf("\n %f : ",e[i].sal);
		}
	}
}
