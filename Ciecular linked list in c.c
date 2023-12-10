#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
}*start;
void InsertionAtBegin(int value)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
		temp->next=start;
	}
	else
	{
		struct node *current=start;
		while(current->next!=start)
		{
			current=current->next;
		}
	    temp->next=start;
		start=temp;
		current->next=start;
	}
}
void InsertionAtEnd(int value)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
		temp->next=start;
	}
	else
	{
		struct node *current=start;
		while(current->next!=start)
		{
			current=current->next;
		}
		current->next=temp;
		temp->next=start;
	}
}
void InsertionAfterSpecificNode(int value1,int value2)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value1;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
		temp->next=start;
	}
	else
	{
		struct node *current=start;
		while(current->next!=start)
		{
			if(current->data==value2)
			break;
			
			current=current->next;
		}
		temp->next=current->next;
		current->next=temp;
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
		struct node *current=start;
		while(current->next!=start)
		{
			current=current->next;
		}
		start=start->next;
		current->next=start;
		temp->next=NULL;
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
		while(temp->next!=start)
		{
			current=temp;
			temp=temp->next;
		}
		current->next=start;
		temp->next=NULL;
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
		while(temp->next!=start)
		{
			if(temp->data==value)
			break;
			
			current=temp;
			temp=temp->next;
		}
		current->next=temp->next;
		temp->next=NULL;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	temp=start;
	do
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=start);
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
