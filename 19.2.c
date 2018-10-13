# include<stdio.h>
# include<string.h>
void main()
{
	char str[20];
	int i,line=1,space=0,len;
	puts("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		space++;
		len=strlen(str);
		if(str[i]=='\n')
		line++;
	}
	printf("no. of line is %d\n",line);
	printf("no. of word is %d\n",space+1);
	printf("no. of  is charecter %d\n",len-space);
}
