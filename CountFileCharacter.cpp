#include<stdio.h>
#include<stdlib.h>
 main()
{
	char filename[100];
	FILE *fptr;
	int count =0;
	char ch;
	
printf("Enter filename:");
scanf("%d",&filename);

fptr = fopen(filename, "r");
if(fptr == NULL)
{
	printf("Unable to open file.\n");
	exit(0);
}

while((ch = fgetc(fptr)) != EOF)
{
	count++;
}

fclose(fptr);
printf("Number of characters in %s is %d.\n", filename, count);
}
