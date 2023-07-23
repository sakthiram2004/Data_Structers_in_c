#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*temp,*newnode,*front,*rear;
void enqueue();
void dequeue();
void display();
int main()
{
	int ch;
	do
	{
	printf("Enqueue-->1\nDequeue-->2\nDisplay-->3\nExit-->4\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Exit\n");
			break;
		default:
			printf("Invalid Choice\n");
	}
}while(ch!=4);
return 0;
}
void enqueue()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(front==0 && rear==0)
	{
		front=newnode;
		rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	if(front==0 && rear==0)
	 printf("Queue is Underflow\n");
	else if(front->next==0)
	{
		printf("%d\n",front->data);
		front=rear=0;
	}
	else
	{
		temp=front;
		printf("%d\n",front->data);
		front=front->next;
		free(temp);
	}
}
void display()
{
	if(front==0 && rear==0)
	  printf("Queue is Underflow\n");
	else
		temp=front;
		while(temp!=0)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
}
