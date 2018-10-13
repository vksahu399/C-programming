#include<stdio.h>
void main ()
{
  int x1,x2,y1,y2;
  float m,c;
  printf("enter the quardinate");
  scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
  m=(y2-y1)/(x2-x1);
  c=y1-m*x1;
  printf("eqution of straight line is y=%fx+%f",m,c);
}
