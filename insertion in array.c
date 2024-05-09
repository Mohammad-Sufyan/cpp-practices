#include<stdio.h>
#include<conio.h>
void main()
{
	int i,size,pos,item,a[19];
	clrscr();
	printf("enter size of array");
	scanf("%d",&size);
	printf("enter element of array");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element pos of array");
	scanf("%d",&size);
	printf("enter new  element in array");
	scanf("%d",&item);
	for(i=size;i>=pos;i--){
	a[i]=a[i-1];}
	a[pos]=item;
	size++;
	
	printf("new array");
	for(i=0;i<=size;i++)
	{
		printf("%d",a[i]);
	}
	
	
	
		getch();
}
