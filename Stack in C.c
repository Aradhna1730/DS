#include<stdio.h>
#define n 10
int stack[n],top;
push(int value)
{
	if(top==n-1)
	{
		printf("\nstack overflowed!!");
	}
	else
	{
		top++;
		stack[top]=value;
	}
}
pop()
{
	if(top==-1)
	{
		printf("\nstack underflowed!!");
	}
	else
	{
		printf("\nelement poped out:%d",stack[top]);
	    top--;
	}
}
void display()
{
	int i;
	printf("\n\nelements in stack:\n");
	for(i=0;i<=top;i++)
	{
		printf("%d\t",stack[i]);
	}
	printf("\n");
}
main()
{
	top=-1;
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
