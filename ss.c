#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int num;
	struct node *next;
};
typedef struct node NODE;
NODE*start;
void createmptylist(NODE *start)
{
	start=NULL;
}
void transverse(NODE *p)
{
	p=start;
	while(p!=NULL)
	{
		printf("%d \n",p->next);
		p=p->next;
	}
	
}

void insertatbegin(int item)
{
	NODE *p;
	p=(NODE *)malloc(sizeof(NODE));
	p->num=item;
	if(start==NULL)
	p->next=NULL;
	else p->next=start;
	start=p;
}
void insertatend(int item)
{
	NODE *p, *loc;
	p=(NODE *)malloc(sizeof(NODE));
	p->num=item;
	if(start==NULL)
	start=p;
	else{
		loc=start;
		while(loc->next!=NULL)
		{
			loc=loc->next;
		}
		loc->next=p;
	}
	
}

void insertspecificloc(int item,int loc)
{
	NODE *p, *temp;
	int i;
	for(i=0,temp=start; i<loc;i++)
	{
		temp=temp->next;
		if(temp==NULL)
		{
			printf("node in the list at less than one \n");
			return;
		}
	}
	p=(NODE *)malloc(sizeof(NODE));
	p->num=item;
	p->next=temp->next;
	temp->next=p;
}

void main()
{
	int choice, item, after;
	char ch;
	clrscr();
	createmptylist(start);
	do
	{
		clrscr();
		printf("1.insert element at begin \n");	
		printf("2.insert element at end \n");
		printf("3.insert element at specific \n");
		printf("4.traverse \n");
		printf("5.exit \n");
		printf("enter your choice \n");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:printf("enter the item\n");
			scanf("%d", &item);
			insertatbegin(item);
			break;
			case 2:printf("enter the item\n");
			scanf("%d", &item);
			insertatend(item);
			break;
			case 3:printf("enter the item\n");
			scanf("%d", &item,&loc);
			insertspecificloc(item,loc);
			break;
			case 4:printf("enter the item\n");
			traverse(start);
			break;
			case 5: exit(0);
			
		}
	}
	while(choice!=5);
}
