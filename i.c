#include<stdio.h>
void main()
{
	char ch;
	struct link
	{
		int info;
		struct link *next;
	};
		typedef struct link NODE;
	NODE *ptr, *start,*new;
	ptr=NULL;
		new=(NODE*)malloc(sizeof(NODE));
		printf("enter data");
		scanf("%d",&new->info);
		if(ptr!=NULL){
			ptr->next=new;
			ptr=ptr->next;
		}
		else{
			start=new;
			ptr=new;
		}}
		
