#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct ndt{
	int data;
	struct ndt * next;
};
typedef struct ndt node;
void create(void);
void insert(void);
void display(void);
void begdelete(void);
void deleteend(void);
node * start;

 main ()
{
	int choice;
	do{
		printf("This is a program to implement a linked list\n");
		printf("press 1 for creation\n");
		printf("press 2 for insert\n");
		printf("press 3 for display\n");
		printf("press 4 for deleting at first\n");
		printf("press 5 for deleting at last\n");
		printf("press 6 for exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create(); break;
			case 2:insert(); break;
			case 3:display(); break;
			case 4:begdelete(); break;
			case 5:deleteend(); break;
			case 6:exit(0); break;

		}
		getch();
		}
		while(1);
}

void create(void)
{

	node* temp;
	temp=(node*)malloc(sizeof(node));
	if(temp!=NULL)
	{
		printf("Enter value for data:");
		scanf("%d",&temp->data);
		start=temp;
		temp->next=NULL;
}
else
{
	printf("Memory could not be allocated by operating");
}
}

void insert(void)
{
	node *temp;
	node *temp1=start;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp=(node*)malloc(sizeof(node));
	if(temp1==NULL)
	{
		printf("Memory not allocated");
	}
	else{
		printf("Enter data:\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		temp1->next=temp;
		printf("Data inserted successfully");
	}
}

void display(void)
{
	node* temp1;
	temp1=start;
	printf("START->");
	while(temp1!=NULL)
	{
		printf("%d-->",temp1->data);
		temp1=temp1->next;
	}
	printf("end"); //beautification
}

void deleteend(void)
{
	struct ndt *temp1 ,*temp2;
	temp1=start;
	while(temp1->next->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp2 = temp1->next;
	free(temp2);
	temp1->next=NULL;
	
}

void begdelete(void)
{
	struct ndt *temp;
	if(start == NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		temp = start;
		start=temp->next;
		free(temp);
		printf("\n Node deleted from the beginning..");
	}
}
