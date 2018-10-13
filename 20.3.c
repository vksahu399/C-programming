# include<stdio.h>
# include<string.h>
void main()
{
	char s[20][20],temp[20];
	int i,j;
	puts("enter five city names :");
	for(i=0;i<5;i++)
	{
		gets(s[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	for(i=0;i<5;i++)
	{
		puts(s[i]);
	}
}
