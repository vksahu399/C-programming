# include<stdio.h>
void main()
{
	char s1[30],s2[30];
	int sum=0,rem=0;
	printf("enter the string");
	gets(s1);
	for(i=strlen(s1)-1;i>=0;i--)
	{	
	   s2[i]=s1[i];
    }
	while(s1>0)
	{
	rem=s1%10;
	sum=sum*10+rem;
	s1=s1/10;
    }
	if(sum==s1)
	printf("%d is PALINDROME",s1);
	else if(sum!=s1)
	printf("%d is not PALINDROME",s1);
}
