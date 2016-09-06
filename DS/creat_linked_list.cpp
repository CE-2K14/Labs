#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start,*nptr,*ptr;
main()
{
	int a,flag=0,n;
	do
	{
	
		if(flag==0)
		{
			nptr=(struct node*)malloc(sizeof(struct node));
			start=nptr;
			printf("Enter the value\n");
			scanf("%d",&start->data);
			start->next=NULL;
			ptr=nptr;
			flag=1;
		}
		else
		{
			nptr=(struct node*)malloc(sizeof(struct node));
			ptr->next=nptr;
			printf("Enter the value\n");
			scanf("%d",&nptr->data);
			nptr->next=NULL;
			ptr=nptr->next;
		}
			printf("1.for continue\n");
		printf("2.For Exit\n");
		scanf("%d",&n);
	}while(n!=2);
		printf("%d",nptr->data);
}
