#include<stdio.h>
#include<malloc.h>
int value;
struct node{
	int data;
	struct node *next;
}*nptr,*ptr,*top;
int push()
{
	printf("Enter the value to be added\n");
	scanf("%d",&value);
	nptr=(struct node*)malloc(sizeof(struct node));
	nptr->data=value;
	if(top==NULL)
	{
		nptr->next=NULL;
		top=nptr;
	}
	else
	{
		nptr->next=top;
		top=nptr;
	}
}
int pop()
{
	if(top==NULL)
	printf("Stack empty\n");
	else
	{
	top=ptr;
	top=top->next;
	return(ptr->data);
	free(ptr);
    }
}
void display()
{
	ptr=top;
	while(ptr!=NULL)
	{
		
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
main()
{
	int n,a=1;
	top=NULL;
	while(a==1)
	{
		printf("1. for PUSH\n");
		printf("2. for POP\n");
		printf("3. for DISPLAY\n");
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			push();
			display();
			break;
		case 2:
			pop();
			display();
			break;
		case 3:
			display();
			break;
	}
	printf("Enter 1 for continue\n");
	scanf("%d",&a);
    }
}
