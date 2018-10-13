# include<stdio.h>
# include<string.h>
void main()
{
	int flag=0,i=0,j;
	char c[30],ch[30],a;
	FILE *fp1,*fp2;
	fp1=fopen("a.txt","w");
	a=getchar();
	if(j=0;j=(!a='q');j++)
	{
		fputc(c[j],fp1+j);
		c[j]=fgets(fp1+j);
	}
	fclose(fp1);
	fp1=fopen("a.txt","r");
	for(j=0;j=(!feof(fp1);j++)
	{
		ch[j]=fgetc(fp1+j);
		if(ch[j]=='vivek')
		i++;
		flag=1;
		continue;
	}
	if(flag==1)
	printf(" Occurences of @ are %d",i);
	else
	printf("word is not found");
}
