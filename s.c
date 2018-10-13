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
	struct emp e[5];
	int n,i;
	FILE *fp;
	printf("enter the no. to inseart");
	scanf("%d",&n);
	fp=fopen("c\\VIVEK SAHU (2).xlsx","a");
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
	fclose(fp);
	fp=fopen("c\\VIVEK SAHU (2).xlsx","r");
	for(i=0;i<n;i++)
	{
			puts(e[i].name);
			printf("\n : %d  ",e[i].id);
			printf("\n");
			puts(e[i].dept);
			printf("\n");
			printf("\n : %f  ",e[i].sal);
	}
}
