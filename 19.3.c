# include<stdio.h>
# include<string.h>
void main()
{
	char s1[30],s2[20];
	int i,j=0;
	puts("enter the string 1");
	gets(s1);
	puts("enter the string 2");
	gets(s2);
	for(i=strlen(s1);i<(strlen(s1)+strlen(s2));i++)
	{
		s1[i]=s2[j];
		j++;
	}
	s1[i]='\0';
	puts(s1);
}
