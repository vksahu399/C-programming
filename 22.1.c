# include<stdio.h>
# include<string.h>
void main()
{
	char c;
	FILE *fp1,*fp2;
	fp1=fopen("a.txt","w");
	c=getchar();
	while(c!='@')
	{
		fputc(c,fp1);
		c=getchar();
	}
	fclose(fp1);
	fp1=fopen("a.txt","r");
	fp2=fopen("b.txt","w");
	while(!feof(fp1))
	{
		c=fgetc(fp1);
		fputc(c,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fp2=fopen("b.txt","r");
	while(!feof(fp2))
	{
		c=fgetc(fp2);
		putchar(c);
	}
	fclose(fp2);
}
