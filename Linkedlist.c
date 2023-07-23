#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*newnode,*temp,*temp2,*i,*j,*head,*prevnode,*currentnode,*nextnode;
int ch,c,d,p,f,v;
void inbeg();
void inend();
void inpos();
void delbeg();
void delend();
void delpos();
void search();
void sort();
void reverse();
void display();
int main()
{
	int n=1,m;
	head=0;
	while(n)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		 head=newnode;
		else
		 temp->next=newnode;
		 temp=newnode;
		printf("Do you wish to continue[1/0]:\n");
		scanf("%d",&n);
	}
	do
	{
		printf("Insertion-->1\nDeletion-->2\nSearch-->3\nSort-->4\nReverse-->5\nDisplay-->6\nExit-->7\n");
		printf("Enter your Choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			  printf("Insertion\n");
			  printf("inbeg-->1\ninend-->2\ninpos-->3\n");
			  printf("Enter m\n");
			  scanf("%d",&m);
			  switch(m)
			  {
			  	case 1:
			  		inbeg();
			  		break;
			  	case 2:
			  		inend();
			  		break;
			  	case 3:
			  		inpos();
			  		break;
			  }
			  break;
			case 2:
				printf("Deletion\n");
				printf("delbeg-->1\ndelend-->2\ndelpos-->3\n");
				printf("Enter m\n");
				scanf("%d",&m);
				switch(m)
				{
					case 1:
						delbeg();
						break;
					case 2:
						delend();
						break;
					case 3:
						delpos();
						break;
				}
				break;
			case 3:
				search();
				break;
			case 4:
				sort();
				break;
			case 5:
				reverse();
				break;
			case 6:
				display();
				break;
			case 7:
				printf("Exit\n");
				break;
			default:
				printf("Invalid Choice\n");
		}
	}while(ch!=7);
	return 0;
}
void inbeg()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\n");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void inend()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	temp=head;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void inpos()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\n");
	scanf("%d",&newnode->data);
	printf("Enter Position:\n");
	scanf("%d",&p);
	d=1;
	temp=head;
	while(d<p-1)
	{
		temp=temp->next;
		d++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void delbeg()
{
	temp=head;
	head=temp->next;
	free(temp);
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void delend()
{
	temp=head;
	while(temp->next->next!=0)
	 temp=temp->next;
	 free(temp->next);
	 temp->next=0;
	 temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void delpos()
{
	printf("Enter position:\n");
	scanf("%d",&p);
	d=1;
	temp=head;
	while(d<p-1)
	{
		temp=temp->next;
		d++;
	}
	temp2=temp->next;
	temp->next=temp->next->next;
	free(temp2);
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void search()
{
	printf("Enter Element:\n");
	scanf("%d",&v);
	temp=head;
	while(temp!=0)
	{
		f=0;
		if(temp->data==v)
		{
			f=1;
			break;
		}
		temp=temp->next;
	}
	if(f==1)
	 printf("%d is Found\n",v);
	else
	 printf("%d is Not Found\n",v);
}
void sort()
{
	for(i=head;i->next!=0;i=i->next)
	 for(j=i->next;j!=0;j=j->next)
	  if(i->data>j->data)
	  {
	  	c=i->data;
	  	i->data=j->data;
	  	j->data=c;
	  }
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void reverse()
{
	prevnode=0;
	currentnode=head;
	nextnode=head;
	while(nextnode!=0)
	{
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
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
