# include<stdio.h>
struct student
{
	int rollno;
	int year;
	char name[20];
	char branch[20];
	float marks;
};
void display(struct student s[5],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s[i].marks>s[i+1].marks)
		{
				printf(" rollno.: %d",s[i].rollno);
				puts(s[i].name);
				puts(s[i].branch);
				printf("%f",s[i].marks);
				printf("\n%d",s[i].year);
		}
	}
}
void main()
{
	int n,i;
	struct student s[5];
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the %d student roll no. :",i+1);
		scanf("%d",&s[i].rollno);
		fflush(stdin);
		printf("\n enter the %d student name :",i+1);
		gets(s[i].name);
		printf("\n enter the %d student branch :",i+1);
		gets(s[i].branch);
		printf("\n enter the %d student year :",i+1);
		scanf("%d",&s[i].year);
		printf("\n enter the %d student marks :",i+1);
		scanf("%f",&s[i].marks);
	}
	display(s,n);
}
