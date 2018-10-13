# include<stdio.h>
# include<string.h>
int main()
{
	char s1[30];
	int i,l,c=0;
	puts("enter the string ");
	gets(s1);
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
    	if(s1[i]!=s1[l-i-1])
		{ 
    		c=1;
    		break;
    	}
	}
	 if(c==1)
	 printf("%s string is not palindrome",s1);
	 else 
	 printf("%s string is palindrome",s1);
}
