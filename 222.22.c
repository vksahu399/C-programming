#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{   
	int num =0;
	char word[2000];
	char *string;
	FILE *fp = fopen("vivek.txt", "a");
	scanf("%s",&word);
	while(!feof(fp))
	{
    	fscanf(fp," %s ",&string);
    	if(strcmp(string,word)>0)
		{
    		num++;
    		continue;
        }
	}
	printf("we found the word %s in the file %d times\n",word,num );
	fclose(fp);
	return 0;
}
