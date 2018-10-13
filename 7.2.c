# include<stdio.h>
void main()
{
	char islower,isupper;
	char a;
	printf("enter any charecter");
	scanf("%c",&a);
	islower=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
	isupper=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
	if(islower||isupper)
	printf("VOWEL");
	else
	printf("CONSONANT");
}
