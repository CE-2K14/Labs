#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node *front,*rear;
int value,n;
void addQ(int value)
{
	struct node *nptr;
	nptr=(struct node*)malloc(sizeof(struct node));
	nptr->data=value;
	if(front==NULL)
	{
		front=nptr;
		front->next=NULL;
		rear=front;
	}
	else
	{
		front->next=nptr;
		front=nptr;
		front->next=NULL;
	}
}
int delQ()
{
	struct node *ptr=rear;
	if(ptr!=NULL)
	{
	value=rear->data;
	rear=rear->next;
	free(ptr);
    }
    else
    {
    	printf("Queue Empty\n");
    }
}
void disQ()
{
	struct node *ptr;
	ptr=rear;
		while(ptr!=NULL)
		{
			printf("|%d|\t",ptr->data);
			ptr=ptr->next;
		}
}
main(){
	front=NULL;
	do
	{
		printf("\n1. for addQ\n");
		printf("2. for delQ\n");
		printf("3. for disQ\n");
		printf("4. for Exit\n");
		printf("Enter your option\n");
		scanf("%d",&n);
		system("cls");
		switch(n)
		{
			case 1:
				printf("Enter value to be added\n");
				scanf("%d",&value);
				addQ(value);
				disQ();
				system("PAUSE");
				break;
			case 2:
				delQ();
				disQ();
				system("PAUSE");
				break;
			case 3:
				printf("Queue is:\n");
				disQ();break;
		}
	}while(n!=4);
}
