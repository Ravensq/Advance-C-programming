#include<stdio.h>
#include<string.h>

int main()
{
	FILE *file;
	int count = 0;
	char ch;
	
	file = fopen("GfgTest.c","r");
	
	if(file == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}
	
	while(ch = fgetc(file) != EOF)
	{
		count++;
	}

	fclose(file);
	
	printf("the file contains %d characters.\n",count);
	
	return 0;
}
