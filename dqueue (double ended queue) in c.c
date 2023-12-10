#include<stdio.h>
#define n 10
int d_queue[n],front,rear;
enqueue_front(int value)
{
	if(front==0)
	{
		printf("\n\ninsertion cannot be performed from front side\nqueue overflowed!!");
	}
	else if((front==-1)&&(rear==-1))
	{
		front=rear=0;
		d_queue[front]=value;
	}
	else
	{
		front--;
		d_queue[front]=value;
	}
}
enqueue_rear(int value)
{
	if(rear==n-1)
	{
		printf("\n\ninsertion cannot be performed from rear side\nqueue overflowed!!");
	}
	else if((front==-1)&&(rear==-1))
	{
		front=rear=0;
		d_queue[rear]=value;
	}
	else
	{
		d_queue[++rear]=value;
	}
}
dequeue_front()
{
	if(front==-1)
	{
		printf("\n\nqueue underflowed!!");
	}
	else if(front==rear)
	{
		printf("\n\nelement to be deleted:%d",d_queue[front]);
		front=rear=-1;
	}
	else 
	{
		printf("\n\nelement to be deleted:%d",d_queue[front]);
		front++;
	}
}
dequeue_rear()
{
	if(rear==-1)
	{
		printf("\n\nqueue underflowed!!");
	}
	else if(front==rear)
	{
		printf("\n\nelement to be deleted:%d",d_queue[rear]);
		front=rear=-1;
	}
	else
	{
		printf("\n\nelement to be deleted:%d",d_queue[rear]);
		rear--;
	}	
}
void end()
{
	printf("\nfront:%d",d_queue[front]);
	printf("\nrear:%d\n",d_queue[rear]);
}
void display()
{
	int i;
	printf("\n----------------\ndouble ended queue elements are:\n");
	while(i!=rear+1)
	{
		printf("%d\t",d_queue[i]);
		i++;
	}printf("\n");
} 
main()
{
	front=rear=-1;
	enqueue_front(50);
	enqueue_rear(10);
	enqueue_rear(20);
	enqueue_rear(30);
	end();
	dequeue_rear();
	enqueue_rear(40);
	end();
	dequeue_front();
	dequeue_front();
	end();
	enqueue_front(50);
	enqueue_front(60);
	end();
	display();
}
