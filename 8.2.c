# include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5;
	float per;
	printf("enter the marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=((m1+m2+m3+m4+m5)*1.0)/5;
	printf("your percentage is %f",per);
	if(per>=90)
	printf("your grade is A");
	else 
	if(per>=80)
	printf("your grade is B");
	else 
	if(per>=60)
	printf("your grade is C");
	else
	printf("your grade is D");
}
