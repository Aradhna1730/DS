#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *prev,*next;
}*start;
void InsertionAtBegin(int value)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
		start=temp;
	}
}
void InsertionAtEnd(int value)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		struct node *current=start;
		while(current->next!=NULL)
		{
			current=current->next;
		}
		current->next=temp;
		temp->prev=current;
	}
}
void InsertionAfterSpecificNode(int value1,int value2)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value1;
	temp->next=NULL;
	temp->prev=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		struct node *current=start;
		while(current->next!=NULL)
		{
			if(current->data==value2)
			break;
			
			current=current->next;
		}
		current->next->prev=temp;
		temp->next=current->next;
		current->next=temp;
		temp->prev=current;
	}
}
void DeletionAtBegin()
{
	struct node *temp;
	temp=start;
	if(start==NULL)
	{
		printf("\ndeletion cannot be performed!!\n");
	}
	else
	{
		start=start->next;
		temp->next=NULL;
		start->prev=NULL;
		free(temp);
	}
}
void DeletionAtEnd()
{
	struct node *temp;
	temp=start;
	if(start==NULL)
	{
		printf("\ndeletion cannot be performed!!\n");
	}
	else
	{
		struct node *current;
		while(temp->next!=NULL)
		{
			current=temp;
			temp=temp->next;
		}
		temp->prev=NULL;
		current->next=NULL;
		free(temp);
	}
}
void DeletionOfSpecificNode(int value)
{
	struct node *temp;
	temp=start;
	if(start==NULL)
	{
		printf("\ndeletion cannot be performed!!\n");
	}
	else
	{
		struct node *current;
		while(temp->next!=NULL)
		{
			if(temp->data==value)
			break;
			
			current=temp;
			temp=temp->next;
		}
		current->next=temp->next;
		temp->next->prev=current;
		temp->prev=NULL;
		temp->next=NULL;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
main()
{
	InsertionAtBegin(10);
	display();
	InsertionAtBegin(20);
	display();
	InsertionAtBegin(30);
	display();
	InsertionAtEnd(50);
	display();
	InsertionAtEnd(60);
	display();
	InsertionAfterSpecificNode(70,50);
	display();
	DeletionAtBegin();
	display();
	DeletionAtEnd();
	display();
	DeletionOfSpecificNode(50);
	display();
	return 0;
}
