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
	int n=0;
	struct node *current=start;
	while(current!=NULL)
	{
		n+=1;
		current=current->next;
	}
	return n;
}
struct node* find(int n,int pos)
{
	int i;
	struct node *temp=start;
	for(i=0;i<n-pos;i++)
	{
		temp=temp->next;
	}
	return temp;
}
main()
{
   int size,pos;
InsertionAtEnd(10);
InsertionAtEnd(50);
InsertionAtEnd(70);
InsertionAtEnd(30);
InsertionAtEnd(20);
InsertionAtEnd(60);
InsertionAtEnd(90);
InsertionAtEnd(20);
InsertionAtEnd(70);
display();
size=count();
printf("\n%d",size);
printf("\nenter postion of node from last:");
scanf("%d",&pos);
struct node *a=find(size,pos);
printf("\nnth node from last is:%d",a->data);
return 0;
}
