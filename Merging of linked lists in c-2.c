#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node* insertionatend(struct node *start,int value)
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
	return start;
}
void display(struct node *start)
{
	struct node *temp=start;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}printf("\n");
}
int count(struct node *start)
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
struct node* sorting(struct node *start,int count)
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
	return start;
}
struct node* merge(struct node *start1,struct node *start2)
{
	struct node *temp=start1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=start2;
	return start1;
}
main()
{
	int size;
	struct node *start1=NULL,*start2=NULL;
	start1=insertionatend(start1, 1);
	start1=insertionatend(start1, 2);
	start1=insertionatend(start1, 4);
	start1=insertionatend(start1, 5);
	printf("1st linked list:\n");
	display(start1);
	printf("\n--------------------\n");
	start2=insertionatend(start2, 10);
	start2=insertionatend(start2, 3);
	start2=insertionatend(start2, 12);
	start2=insertionatend(start2, 6);
	printf("2nd linked list:\n");
	display(start2);
    start1=merge(start1,start2);
    size=count(start1);
	start1=sorting(start1,size);
	printf("\n-------------\nmerged llist:\n");
	display(start1);
	return 0;
}
