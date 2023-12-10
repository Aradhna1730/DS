#include<stdio.h>
#include<malloc.h>
struct d_queue{
	int data;
	struct d_queue *prev,*next;
}*front,*rear;
enqueue_front(int value)//insertion at begin
{
	struct d_queue *temp=(struct d_queue*)malloc(sizeof(struct d_queue));
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	if(front==NULL)
	{
		front=rear=temp;
	}
	else 
	{
		temp->next=front;
		front->prev=temp;
		front=temp;
	}
}
enqueue_rear(int value)//insertion at end
{
	struct d_queue *temp=(struct d_queue*)malloc(sizeof(struct d_queue));
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	if(rear==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->next=temp;
		temp->prev=rear;
		rear=temp;
	}
}
dequeue_front()//deletion at begin
{
	if(front==NULL)
	{
		printf("\ndouble ended queue underflowed!!");
	}
	else
	{
		struct d_queue *temp=front;
		front=front->next;
		front->prev=NULL;
		temp->next=NULL;
		printf("\nelement to be deleted:%d",temp->data);
		free(temp);
	}
}
dequeue_rear()//deletion at end
{
	if(rear==NULL)
	{
		printf("\ndouble ended queue underflowed!!");
	}
	else
	{
		struct d_queue *temp=rear;
		rear=temp->prev;
		rear->next=NULL;
		temp->prev=NULL;
		printf("\nelement to be deleted:%d",temp->data);
		free(temp);
	}
}
void display()
{
	struct d_queue *temp=front;
	printf("\n----------------\ndouble ended queue elements are:\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}printf("\n");
}
main()
{
	enqueue_front(10);
	enqueue_front(20);
	enqueue_front(30);
	enqueue_rear(40);
	enqueue_rear(50);
	dequeue_front();
	dequeue_rear();
	display();
	return 0;
}
