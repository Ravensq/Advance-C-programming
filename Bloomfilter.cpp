#include<stdio.h>
#include<string.h>

struct node{
	char text[10];
	int code;
};
struct node st[3];

int fun(int);
int main()
{
	int i;

	for(i=0;i<3;i++)
	{
		printf("\nEnter text:");
		scanf("%s",&st[i].text);
		st[i].code=fun(i);
		//printf("\nEnter code:");
		
		
		//scanf("%d", &st[i].code);
	}
	printf("\nThe information is:\n");
	
	for(i=0;i<3;i++)
	{
		printf("text:%s ",st[i].text);
		//printf("code:%d ",st[i].code);
	}
}

int fun(int i)
{
	int j, sum=0;
	for(j=0;j<strlen(st[i].text);j++)
	{
		sum=sum+st[i].text[j];
	}
	printf("%d",sum);
	return(sum%23);
}

