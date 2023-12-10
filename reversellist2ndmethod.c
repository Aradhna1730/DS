#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next; 
}*start;
void InsertionAtEnd(int value)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	struct node *current;
	current=start;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		while(current->next!=NULL)
		{
			current=current->next;
		}
		current->next=temp;
	}
}
void display()
{
	struct node *temp;
	temp=start;
	if(start==NULL)
	{
		printf("linked list is empty\n");
	}
	else
	{  
	    while(temp!=NULL)
	    {
		    printf("%d\t",temp->data);
		    temp=temp->next;
	    }printf("\n");
	}
}
void reverse()
{
	struct node *temp,*current=start;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	struct node *s=current;
	while(start->next!=NULL)
	{current=start;
	while(current->next!=NULL)
	{
		temp=current;
		current=current->next;
	}
	current->next=temp;
	temp->next=NULL;
    }
    start=s;
}
main()
{
InsertionAtEnd(10);
InsertionAtEnd(50);
InsertionAtEnd(70);
InsertionAtEnd(30);
InsertionAtEnd(20);
InsertionAtEnd(60);
InsertionAtEnd(90);
display();
printf("\n-------------------------\n");
reverse();
display();
}
