#include<stdio.h>
#include<malloc.h>
struct stack{
	int data;
	struct stack *next;
}*top;
push(int value)//insertion at begin
{
	struct stack *temp=(struct stack*)malloc(sizeof(struct stack));
	temp->data=value;
	temp->next=NULL;
	if(top==NULL)
	{
		top=temp;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
}
pop()//deletion at begin
{
	if(top==NULL)
	{
		printf("\nstack underflowed!!");
	}
	else
	{
	   struct stack *temp=top;
	   top=top->next;
	   temp->next=NULL;
	   printf("\nelement to be poped:%d",temp->data);
	   free(temp);
    }
}
void display()
{
	struct stack *temp=top;
	printf("\nelements of stack :\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
main()
{
	push(10);
	push(45);
	push(23);
	push(18);
	push(11);
	push(87);
	pop();
	pop();
	display();
	return 0;
}
