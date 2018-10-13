# include<stdio.h>
# include<ctype.h>
void main()
{
	char str[20];
	int c=0,i;
	puts("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(tolower(str[i]=='a')||tolower(str[i]=='e')||tolower(str[i]=='i')||tolower(str[i]=='o')||tolower(str[i]=='u'))
		c++;
	}
	printf("no. of vowel is %d",c);
}
