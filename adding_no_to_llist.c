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
void add(int n,int num)
{
	int i;
	struct node *current=start;
    for(i=1;i<n;i++)
    {
    	current=current->next;
	}
	current->data+=num;
	if((current->data)>9)
	{
		num=(current->data)/10;
		current->data=(current->data)%10;
		add(n-1,num);
	}
}
main()
{
	int size,n;
InsertionAtEnd(1);
InsertionAtEnd(9);
InsertionAtEnd(9);
InsertionAtEnd(9);
InsertionAtEnd(9);
InsertionAtEnd(9);
InsertionAtEnd(9);
InsertionAtEnd(9);
display();
size=count();
printf("enter number to be added:");
scanf("%d",&n);
add(size,n);
display();
return 0;
}
