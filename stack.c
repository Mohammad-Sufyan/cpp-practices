#include<stdio.h>
#include<conio.h>

#define N 5
int stack[N];
int top=-1;
void push()
{
	int x;
	printf("enter data \n");
	scanf("%d",&x);
	if(top==N-1)
	{
		printf("overflow");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}

void pop()
{
	int item;
	if(top==-1)
	{
		printf("underflow");
	}
	else{
		item=stack[top];
		top--;
		printf("%d\n",item);
	}}
	
	void peek()					// getting the topmost element from stack
	{
		if(top==-1)
		{
			printf("empty");
		}
		else{
			printf("%d",stack[top]); 
		}
	}
	
	void display()
	{
		int i;
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
	

void main()
{
	int ch;
	
	while(1)
	{
		printf("enter choice: 1=push  2=pop  3=peek  4=display\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
		    default:printf("invalid ch");
		}
		
		getch();
	}
}


