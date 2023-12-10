#include<stdio.h>
#include<malloc.h>
struct c_queue{
	int data;
	struct c_queue *next;
}*front,*rear;
enqueue(int value)//insertion at end
{
	struct c_queue *temp=(struct c_queue*)malloc(sizeof(struct c_queue));
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
		rear->next=front;
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
		struct c_queue *temp=front;
		front=front->next;
		rear->next=front;
		temp->next=NULL;
		printf("\nelement to be deleted:%d",temp->data);
		free(temp);
	}
}
void display()
{
	struct c_queue *temp=front;
	printf("\nelements of circular queue:\n");
	do{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=front);
	printf("\n");
}
main()
{
	enqueue(10);
	enqueue(34);
	dequeue();
	enqueue(23);
	enqueue(67);
	enqueue(45);
	enqueue(89);
	dequeue();
	//dequeue();
	display();
	return 0;
}
