#include<stdio.h>
#include<malloc.h>
struct queue{
	int data;
	struct queue *next;
}*front,*rear;
enqueue(int value)//insertion at end
{
	struct queue *temp=(struct queue*)malloc(sizeof(struct queue));
	temp->data=value;
	temp->next=NULL;
	if(front==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
dequeue()//deletion at begin
{
	if(front==NULL)
	{
		printf("\nqueue underflowed!!");
	}
	else
	{
	   struct queue *temp=front;
	   front=front->next;
	   temp->next=NULL;
	   printf("\nelement to be deleted:%d",temp->data);
	   free(temp);
    }
}
void display()
{
	struct queue *temp=front;
	printf("\nnelements of queue :\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
main()
{
	enqueue(10);
	enqueue(34);
	enqueue(23);
	enqueue(67);
	enqueue(45);
	enqueue(89);
	dequeue();
	dequeue();
	display();
	return 0;
}
