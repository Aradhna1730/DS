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
	}
}
int count()
{
	int c=0;
	struct node *current=start;
	while(current!=NULL)
	{
		c++;
		current=current->next;
	}
	return c;
}
int middle(int count)
{
	int mid;
	struct node *fp,*sp;
	fp=sp=start;
	if(count%2==0)
	{
		while(fp->next->next!=NULL)
		{
			sp=sp->next;
			fp=fp->next->next;
		}
		mid=((sp->data)+(sp->next->data))/2;
	}
	else
	{
		while(fp->next!=NULL)
		{
			sp=sp->next;
			fp=fp->next->next;
		}
		mid=sp->data;
	}
	return mid;
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
    int size,m;
	InsertionAtEnd(10);
	display();
	InsertionAtEnd(30);
	display();
	InsertionAtEnd(70);
	display();
	InsertionAtEnd(50);
	display();
	InsertionAtEnd(90);
	display();
	InsertionAtEnd(60);
	display();
	size=count();
	printf("\nsize of linked list is:%d\n",size);
	m=middle(size);
	printf("\nmiddle element of linked list:%d\n",m);
	return 0;
}
