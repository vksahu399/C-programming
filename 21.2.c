# include<stdio.h>
struct student
{
	int rollno;
	int year;
	char name[20];
	char branch[20];
	float marks;
};
void avarage(struct student s[5],int n)
{
	int i,sum=0;
	float avg;
	for(i=0;i<n;i++)
	{
		sum=sum+s[i].marks;
	}
	avg=(float)sum/n;
	printf("avarage marks is %f",avg);
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
		scanf("%f",&s[i].year);
		printf("\n enter the %d student marks :",i+1);
		scanf("%f",&s[i].marks);
	}
	avarage(s,n);
}
