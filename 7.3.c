# include<stdio.h>
void main()
{
	char a;
	printf("enter any charecter");
	scanf("%c",&a);
	if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	printf("ALPHABET");
	else
	if(a>='0'&&a<='9')
	printf("DIGIT");
	else
	printf("SYMBOL");
}
