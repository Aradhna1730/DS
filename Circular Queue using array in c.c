#include<stdio.h>
#define n 5
int c_queue[n],rear,front;
enqueue(int value)
{
	if(front==(rear+1)%n)
	{
		printf("\nqueue overflowed!!");
	}
	else if((front==-1)&&(rear==-1))
	{
		front=rear=0;
		c_queue[rear]=value;
	}
	else
	{
	    rear=(rear+1)%n;
		c_queue[rear]=value;	
	}
}
dequeue()
{
	if(front==-1)
	{
		printf("\nqueue underflowed!!");
	}
	else if(front==rear)
	{
		printf("\nelement to be deleted:%d",c_queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("\nelement to be deleted:%d",c_queue[front]);
		front=(front+1)%n;
	}
}
void display()
{
	int i=front;
	printf("\nelements of circular queue:\n");
	do
	{
		printf("%d\t",c_queue[i]);
		i=(i+1)%n;
	}while(i!=rear+1);
	/*for(i=0;i<n;i++)
	{
		printf("%d\t",c_queue[i]);
	}*/
}
void position()
{
	printf("\nposition of front:%d",front);
	printf("\nposition of rear:%d\n",rear);
}
main()
{
	front=-1;
	rear=-1;
	enqueue(10);
	enqueue(34);
	enqueue(23);
	enqueue(64);
	enqueue(45);
	position();
	dequeue();
	enqueue(89);
	position();
	dequeue();
	dequeue();
	position();
	display();
	return 0;
}
