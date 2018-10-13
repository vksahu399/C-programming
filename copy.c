#include<stdio.h>
#include<conio.h>
void main()
{
float x,sum,term;
int i,n;
printf("enter the Value of x and (n) Number of terms to be sum\t :");
scanf("%f%d",&x,&n);
sum =0; term = 1;
for (i=1;i<n;i++)
{
 term = term*x/(float)i;
 sum =sum+ term;
}
printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x);
getch();
}
