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
	struct node *temp1,*temp2,*current;
	temp1=start;
	temp2=start->next;
	current=start->next->next;
	temp1->next=NULL;
    while(current!=NULL)
    {
    	temp2->next=temp1;
    	temp1=temp2;
    	temp2=current;
    	current=current->next;
	}
	temp2->next=temp1;
	start=temp2;
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
