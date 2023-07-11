#include<stdio.h>
#include<string.h>

struct node{
char hashstring[50];
struct node *link;
};

struct hashnode{
	char hashstring[50];
	int hashcode;
	struct node *next;
};
int calhash(int);

struct hashnode hashtable[23];


void main(void)
{
	int i;
	for(i=0;i<=22;i++)
	{
		printf("Enter String");
		scanf("%s",&hashtable[i].hashstring);
		hashtable[i].hashcode=calhash(i);
	}
	
	for(i=0;i<=22;i++)
	{
		printf("%d %s",hashtable[i].hashcode,hashtable[i].hashstring);
	}
}

int calhash(int i)
{
	int j,sum=0;
	for(j=0;j<strlen(hashtable[i].hashstring);j++)
	{
		sum=sum +hashtable[i].hashstring[j];
		return(sum%23);
	}
}
