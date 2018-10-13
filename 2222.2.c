#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<conio.h> 
int wc(char* c:\\users\hp\desktop\vivek c language\vivek.txt, char* word)
{ 
	FILE *fp; 
	int count = 0; 
	int ch, len; 
	if(NULL==(fp=fopen(c:\users\hp\desktop\vivek c language\vivek.txt, "r"))) 
	return -1;
	len = strlen(word); 
	for(;;)
	{
	 	int i;
		if(EOF==(ch=fgetc(fp))) 
		break;
		if((char)ch != *word) 
		continue;
		for(i=1;i < len;++i)
		{
			if(EOF==(ch = fgetc(fp))) 
			goto end; 
			if((char)ch != word[i])
			{
			 	fseek(fp, 1-i, SEEK_CUR); 
				goto next; 
			} 
		} 
		++count;
		 next: ; 
	} 
	end: fclose(fp); 
	return count;
} 
int main()
{
	char key[20];
	int wordcount = 0;  
	printf("Enter the word to be searched\n"); 
	scanf("%s",&key); 
	wc("c:\users\hp\desktop\vivek c language\vivek.txt", key); 
	printf("The word occurs %d times in the input.txt file",wordcount); 
	getch(); 
	return 0; 
}
