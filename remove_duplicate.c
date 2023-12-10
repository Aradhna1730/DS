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
int count()
{
	int count=0;
	struct node *temp=start;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
void sorting(int count)
{
	struct node *current=start;
	int i,j,temp;
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-i-1;j++)
		{
			if((current->data)>(current->next->data))
			{
				temp=current->data;
				current->data=current->next->data;
				current->next->data=temp;
			}
			current=current->next;
		}
		current=start;
	}
}
void r_duplicate()
{
	struct node *temp,*current;
	temp=start;
	current=start->next;
	while(current!=NULL)
	{
		label:
		if(temp->data==current->data)
		{
			temp->next=current->next;
			current->next=NULL;
			free(current);
			current=temp->next;
			goto label;
		}
		temp=temp->next;
		current=current->next;
	}
}
main()
{
	int size;
InsertionAtEnd(10);
display();
InsertionAtEnd(50);
display();
InsertionAtEnd(70);
display();
InsertionAtEnd(30);
display();
InsertionAtEnd(20);
display();
InsertionAtEnd(60);
display();
InsertionAtEnd(90);
display();
InsertionAtEnd(20);
display();
InsertionAtEnd(70);
display();
printf("\nbefore sorting:\n");
display();
size=count();
sorting(size);
printf("\nafter sorting:\n");
display();
r_duplicate();
printf("\nafter removing dulplicates:\n");
display();
}
