#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
main()
{
	struct node *start,*ptr,*nptr,*ptr2,*ptr1,*prev;
	int ch=1,flag=0,value,n,l=0,i;
	do
	{
		printf("\n1. for creating list\n");
		printf("2. for insertion a element\n");
		printf("3. for deletion\n");
		printf("4. for print\n");
		printf("5. for Exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				while(ch==1)
					{
		
						if(flag==0)
							{
								nptr=(struct node*)malloc(sizeof(struct node));
								start=nptr;
								printf("\nEnter the value\n");
								scanf("%d",&start->data);
								start->next=NULL;
								ptr=nptr;
								flag=1;l++;
							}
						else
							{
								nptr=(struct node*)malloc(sizeof(struct node));
								ptr->next=nptr;
								printf("\nEnter the value\n");
								scanf("%d",&nptr->data);
								nptr->next=NULL;
								ptr=ptr->next;l++;
							}
						printf("\nEnter 1 for continue creation and 0 for performing another function\n");
						scanf("%d",&ch);
    				}
						break;
			case 2:
				printf("\n1.for insertion as first node\n");
				printf("\n2.for insertion as last node\n");
				printf("\n3.for insertion node as value\n");
				printf("\n4. for Exit\n");
				scanf("%d",&n);
				switch(n)
				{
					case 1:
						if(l==0)
							{
								printf("\nCreate the list first\n");
								break;
							}
						else
							{
								nptr=(struct node*)malloc(sizeof(struct node));
								ptr->next=start;
								start=nptr;
								printf("\nEnter the value\n");
								scanf("%d",&start->data);
							}break;
					case 2:
						ptr=start;
						while(ptr->next!=NULL)
						{
							ptr=ptr->next;
						}
						nptr=(struct node*)malloc(sizeof(struct node));
						nptr->next=NULL;
						ptr->next=nptr;
						printf("\nEnter the value\n");
						scanf("%d",&ptr->data);
						break;
					case 3:
						printf("enter the value\n");
						scanf("%d",&value);
						ptr=start->next;
						prev=start;
						if(prev->data>value)
						{
							nptr=(struct node*)malloc(sizeof(struct node));
							ptr->next=start;
							start=nptr;
							start->data=value;
						}
						else
						{
							while(ptr->data<value&&ptr)
							{
								ptr=ptr->next;
								prev=prev->next;
							}
							nptr=(struct node*)malloc(sizeof(struct node));
							nptr->next=prev->next;
							nptr->data=value;
						}	
					case 4:
						break;
				}
			case 3:
				printf("1. for deleting first node\n");
	            printf("2. for deleting last node\n");
				printf("3. for deleting node at any place\n");
				printf("4. for deleting a node having any value\n");
				printf("5. for Exit\n");
				scanf("%d",&n);
				switch(n)	
				{
					case 1:
						ptr=start;
						start=start->next;
						free(ptr);
						break;
					case 2:
						ptr=ptr->next;
						ptr1=ptr;
						while(ptr->next!=NULL)
						{
							ptr=ptr->next;
							ptr1=ptr1->next;
						}
						ptr1->next=NULL;
						free(ptr);
						break;
					case 3:
						printf("Enter the node to be deleted\n");
						scanf("%d",&n);
							ptr=start->next;
							ptr2=start;
							for(i=1;i<=n-1;i++)
							{
								ptr=ptr->next;
								ptr2=ptr2->next;
							}
				
							ptr->next=ptr2->next;
							free(ptr);break;
					case 4:
						printf("Enter the value\n");
						scanf("%d",&value);
						ptr1=start;
						ptr=start->next;
						while((ptr->data!=value)&&ptr!=NULL)
						{
							ptr=ptr->next;
							ptr1=ptr1->next;
						}
						if(ptr)
						{
							ptr1->next=ptr->next;
							free(ptr);
						}
						else printf("Node not found\n");
					case 5:
						break;
				}
			case 4:
				printf("\nThe list is:\n");
				ptr=start;
				if(l==0)
				printf("\nNO DATA\n");
				else
					while(ptr!=NULL)
						{
							printf("%d\t",ptr->data);
							ptr=ptr->next;
						}
	}
	}while(n!=5);
}

