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
int middle(int n)
{
	int mid;
   	struct node *sptr,*fptr;
   	sptr=fptr=start;
   	if(n%2!=0)
   	{
   		while(fptr->next!=NULL)
   		{
   			fptr=fptr->next->next;
   			sptr=sptr->next;
		}
		mid=sptr->data;
	}
	else
	{
		while(fptr->next->next!=NULL)
		{
			fptr=fptr->next->next;
			sptr=sptr->next;
		}
		mid=((sptr->data)+(sptr->next->data))/2;
	}
	return mid;
}
main()
{
	int size,mid;
InsertionAtEnd(10);
InsertionAtEnd(50);
InsertionAtEnd(70);
InsertionAtEnd(30);
InsertionAtEnd(20);
InsertionAtEnd(60);
InsertionAtEnd(90);
InsertionAtEnd(80);
display();
size=count();
mid=middle(size);
printf("\nmiddle of %d sized linked list is=%d",size,mid);
}
