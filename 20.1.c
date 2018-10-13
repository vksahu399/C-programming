# include<stdio.h>
# include<string.h>
void main()
{
	char s1[30],s2[20];
	int i,j=0;
	puts("enter the string ");
	gets(s1);
	for(i=strlen(s1)-1;i>=0;i--)
	{
		s2[j]=s1[i];
		j++;
	}
	s2[j]='\0';
	puts(s2);
}
