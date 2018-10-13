# include<stdio.h>
# include<string.h>
void main()
{
	char s1[30],s2[20];
	int i,j;
	puts("enter the string 1");
	gets(s1);
	puts("enter the string 2");
	gets(s2);
	strcat(s1,s2);
	puts(s1);
}
