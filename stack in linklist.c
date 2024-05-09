#include<stdio.h>
#include<conio.h>
#include<malloc.h>

//LIFO condition
struct node
{
	int data;
	struct node *link;
};
   struct node *top = 0;
void push(int x)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->link=top;
	top=newnode;
}

void display()
{
	struct node *temp;
	temp=top;
	if(top==0)
	{
		printf("empty");
	}
	else
	{
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->link;
		}
	}
}

void peek()
{
	struct node *temp;
	if(top==0)
	{
		printf("empty");
	}
	else
	{
	printf("top element is %d",temp->data);	
	}
}

void pop()
{
	struct node *temp;
	temp=top;
	if(top==0)
	{
		printf("underflow");
	}
	else{
		printf("deleted item is %d",top->data);
		top=top->link;
		free(temp);
	}
	
	
}

void main()
{
	int ch;
	
	while(1)
	{
		printf("enter choice: 1=push  2=display  3=peek  4=pop\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:push("int x");
			break;
			case 2:display();
			break;
			case 3:peek();
			break;
			case 4:pop();
			break;
		    default:printf("invalid ch");
		}
		
		getch();
	}
}
