#include<stdio.h>
#include<stdlib.h>
int top=-1;
struct node
{
	int data;
	struct node *next;
}*head,*temp,*newnode,*temp2;
void push();
void pop();
void peek();
void peep();
void display();
int main()
{
	int ch;
	do
	{
		printf("Push-->1\nPop-->2\nPeek-->3\nPeep-->4\nDisplay-->5\nExit-->6\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				peep();
				break;
			case 5:
				display();
				break;
			case 6:
				printf("Exit\n");
				break;
			default:
				printf("Invalid Choice\n");
		}
	}while(ch!=6);
	return 0;
}
void push()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(top==-1)
	{
		top++;
		head=newnode;
		printf("Element is Pushed\n");
	}
	else
	{
		top++;
		temp=head;
		while(temp->next!=0)
		 temp=temp->next;
		 temp->next=newnode;
		printf("Element is Pushed\n");
	}
}
void pop()
{
	if(top>=0)
	{
		temp=head;
		while(temp->next->next!=0)
		temp=temp->next;
		temp2=temp->next;
		temp->next=0;
		top--;
		printf("Popped Element %d\n",temp2->data);
	}
	else
	 printf("Stack is Underflow\n");
}
void peek()
{
	if(top>=0)
	{
		temp=head;
		while(temp->next!=0)
			temp=temp->next;
			printf("Peek Element is %d\n",temp->data);
	}
	else
	 printf("Stack is Invalid\n");
}
void peep()
{
	int p,d;
	printf("Enter position\n");
	scanf("%d",&p);
	d=1;
	temp=head;
	while(d<p-1)
	{
		temp=temp->next;
		d++;
	}
	printf("Peep Element is %d\n",temp->data);
}
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
