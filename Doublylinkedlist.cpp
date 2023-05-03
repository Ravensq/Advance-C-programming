#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct ndt{
int data;
struct ndt* next;
struct ndt* prev;
};

typedef struct ndt node;
void create(void);
void insert(void);
void display(void);
void deleteend(void);
node* start=NULL;

main()
{
	int choice;
	do{
		printf("This is a program to implement doubly linked list\n");
		printf("Press 1 for creation\n");
		printf("Press 2 for insert\n");
		printf("Press 3 for display\n");
		printf("Press 4 for deletion\n");
		printf("Press 5 for exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:create(); break;
			case 2:insert(); break;
			case 3:display(); break;
			case 4:deleteend(); break;
			case 5:exit(0); break;
		}
		getch();
	}while(1);
}

void create(void)
{
		node* temp;
		temp=(node*)malloc(sizeof(node));
		if(temp!=NULL)
		{
			printf("Enter value for data:");
			scanf("%d",&temp->data);
			temp->next=NULL;
			temp->prev=NULL;
			start=temp;
		}
		else
		{
			printf("Memory could not be allocated");
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
	 if(temp==NULL)
	 {
	 	printf("Memory not allocated");
	 }
	  else
	  {
	  printf("Enter data:\n");
	  scanf("%d",&temp->data);
	  temp->next=NULL;
	  temp1->next=temp;
	  printf("Data inserted successfully");
}
	 
	 
}

void display(void) {
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

void deleteend(void){
	node *temp1, *temp2;
	temp1=start;
	while(temp1->next->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp2=temp1->next;
	free(temp2);
	temp1->next=NULL;
}
