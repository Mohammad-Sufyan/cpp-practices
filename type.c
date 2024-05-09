#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
	while (ptr!=NULL)
	{
		printf("element %d\n",ptr->data);
		ptr=ptr->next;
	}
}

struct node * deletefirst(struct node * head)
{
	struct node * ptr=head;
	head=head->next;
	free(ptr);
	return head;
}

struct node * deleteAtIndex(struct node * head,int index,int i)
{
	struct node *p=head;
	struct node *q=head->next;
	
	for(i = 0 ;i < index-1; i++)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}

struct node * deleteAtLast(struct node * head)
{
	struct node *p=head;
	struct node *q=head->next;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return head;
	
}

struct node *deleteAtindexvalue(struct node * head,int value)
{
	struct node *p=head;
	struct node *q=head->next;
	while(q->data!=value && q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	if(q->data == value)
	{
		p->next=q->next;
		free(q);
	}
	return head;
}
int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	
	 head=(struct node*)malloc(sizeof(struct node));
	 second=(struct node*)malloc(sizeof(struct node));
	 third=(struct node*)malloc(sizeof(struct node));
	 fourth=(struct node*)malloc(sizeof(struct node));
	 
	 head->data=4;
	 head->next=second;
	 second->data=7;
	 head->next=third;
	 third->data=9;
	 head->next=fourth;
	 head->data=5;
	 head->next=NULL;
	 
	 printf("linked list before deletion\n");
	 linkedlistTraversal(head);
	 
	 head=deleteAtLast(head);
	 printf("linked list after deletion\n");
	 linkedlistTraversal(head);
	 
	 return 0;
	 
}
	
