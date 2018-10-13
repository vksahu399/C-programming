# include<stdio.h>
void main()
{
	int yos,q,sal=0;
	char g;
	printf("enter the year of service,qualification(pg=1 or g=0),gender(m,f)");
	scanf("%d%d%c",&yos,&q,&g);
	if(g=='m'&&yos>=10&&q==1)
	sal=15000;
	else if(g=='m'&&yos>=10&&q==0)
	sal=10000;
	else if(g=='f'&&yos>=10&&q==1)
	sal=12000;
	else if(g=='f'&&yos>=10&&q==0)
	sal=9000;
	else if(g=='m'&&yos<10&&q==1)
	sal=10000;
	else if(g=='f'&&yos<10&&q==1)
	sal=10000;
	else if(g=='m'&&yos<10&&q==0)
	sal=7000;
	else if(g=='f'&&yos<10&&q==0)
	sal=6000;
	
	printf("\nsalary of emmployee is %d\n",sal);
}
