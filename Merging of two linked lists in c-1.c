#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
void insertionatend(struct node **start,int value)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	if(*start==NULL)
	{
		*start=temp;
	}
	else
	{
		struct node *current=*start;
		while(current->next!=NULL)
		{
			current=current->next;
		}
		current->next=temp;
	}
}
void display(struct node **start)
{
	struct node *temp=*start;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}printf("\n");
}
int count(struct node **start)
{
	int count=0;
	struct node *temp=*start;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
void sorting(struct node **start,int count)
{
	struct node *current=*start;
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
		current=*start;
	}
}
struct node* merge(struct node *ptr1,struct node *ptr2)
{
	int temp;
	struct node *start1=ptr1,*start2=ptr2,*start=NULL;
	while(start1!=NULL)
	{
		if((start1->data)<=(start2->data))
		{
		   temp=start1->data;
		   insertionatend(&start,temp);
		   start1=start1->next;
	    }
	    else
	    {
	    	temp=start2->data;
	    	insertionatend(&start,temp);
	    	start2=start2->next;
		}
	}
	if(start2!=NULL)
		{
			while(start2!=NULL)
			{
				temp=start2->data;
				insertionatend(&start,temp);
	    	    start2=start2->next;
			}
		}
	return start;
}
main()
{
	int size1,size2;
	struct node *start1=NULL,*start2=NULL,*start=NULL;
	insertionatend(&start1, 1);
	insertionatend(&start1, 2);
	insertionatend(&start1, 4);
	insertionatend(&start1, 5);
	printf("1st linked list:\n");
	display(&start1);
	printf("\n--------------------\n");
	insertionatend(&start2, 10);
	insertionatend(&start2, 3);
	insertionatend(&start2, 12);
	insertionatend(&start2, 6);
	printf("2nd linked list:\n");
	display(&start2);
	size1=count(&start1);
	size2=count(&start2);
	sorting(&start1,size1);
	sorting(&start2,size2);
	printf("1st linked list after sorting:\n");
	display(&start1);
	printf("2st linked list after sorting:\n");
	display(&start2);
	start=merge(start1,start2);
	printf("\n-------------\nmerged llist:\n");
	display(&start);
	return 0;
}

