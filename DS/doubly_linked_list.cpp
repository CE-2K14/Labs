#include<stdio.h>
#include<malloc.h>
struct doubly{
	int data;
	struct doubly *next;
	struct doubly *prev;
};
struct doubly *start,*ptr,*nptr;
int value;
void create()
{
	int flag=0,ch=1;
	while(ch==1)
	{
		
		if(flag==0)
		{
			nptr=(struct doubly*)malloc(sizeof(struct doubly));
			start=nptr;
			printf("Enter the value\n");
			scanf("%d",&start->data);
			start->next=NULL;
			start->prev=NULL;
			ptr=nptr;flag=1;
		}
		else
		{
			nptr=(struct doubly*)malloc(sizeof(struct doubly));
			printf("Enter the value\n");
			scanf("%d",&nptr->data);
			ptr->next=nptr;
			nptr->next=NULL;
			nptr->prev=ptr;
			ptr=ptr->next;
		}
		printf("Enter 1 for continue and 0 for exit\n");
		scanf("%d",&ch);
	}
}
void insert()
{
	printf("Enter the value\n");
	scanf("%d",&value);
	ptr=start;
	while((ptr->data<=value)&&ptr->next!=NULL)
	{
	ptr=ptr->next;
    }
    if(ptr->next!=NULL)
    {
	nptr=(struct doubly*)malloc(sizeof(struct doubly));
	nptr->next=ptr;
	nptr->prev=ptr->prev;
	ptr->prev->next=nptr;
	ptr->prev=nptr;
	nptr->data=value;
    }
    else
    {
    	nptr=(struct doubly*)malloc(sizeof(struct doubly));
    	ptr->next=nptr;
    	nptr->data=value;
    	nptr->next=NULL;
    }
}
void del1()
{
	ptr=start;
	start=start->next;
	ptr->next->prev=NULL;
	free(ptr);
}
void dell()
{
	ptr=start;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	ptr->prev->next=NULL;
	free(ptr);
}
void del()
{
	printf("Enter the value\n");
	scanf("%d",&value);
	ptr=start;
	while((ptr->data!=value)&&ptr)
	ptr=ptr->next;
	ptr->prev->next=ptr->next;
	ptr->next->prev=ptr->prev;
	free(ptr);
}
void display()
{
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
main(){
	int n,m;
	do
	{
		printf("\n1. for creation\n");
		printf("2. for insertion\n");
		printf("3. for deletion\n");
		printf("4. for display\n");
		printf("5. for exit\n");
		printf("Enter the Option\n");
		scanf("%d",&n);
		system("cls");
		switch(n)
		{
			case 1:
				create();
				break;
			case 2:
				printf("insert value in list at its place\n");
				insert();
				break;
			case 3:
				printf("1. for deleting first\n");
				printf("2. for deleting last node\n");
				printf("3. for deleting by value\n");
				printf("4. for Exit\n");
				scanf("%d",&m);
				switch(m)
				{
					case 1:
						del1();break;
					case 2:
						dell();break;
					case 3:
						del();
						break;
				}
				break;
			case 4:
				display();
				break;
			
		}
	}while(n!=5);
}
