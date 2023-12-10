#include<stdio.h>
#define n 10
int queue[n],front,rear;
enqueue(int value)
{
	if(rear==n-1)
	{
		printf("\nqueue overflowed!!");
	}
	else if((front==-1)&&(rear==-1))
	{
		front=rear=0;
		queue[rear]=value;
	}
	else
	{
		rear++;
		queue[rear]=value;
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
		printf("\nelement to be deleted:%d",queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("\nelement to be deleted:%d",queue[front]);
		front++;
	}
}
void display()
{
	int i=front;
	printf("\nelements of queue:\n");
	while(i<=rear)
	{
		printf("%d\t",queue[i]);
		i++;
	}
}
main()
{
	front=rear=-1;
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
