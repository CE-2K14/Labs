#include<stdio.h>
#include<malloc.h>
struct tnode{
	char ch;
	struct tnode *leftchild,*rightchild;
};
struct node{
	struct tnode *item;
	struct node *next;
};
struct node *push(struct node *top,struct node *ptr);
struct node *pop(struct node *top,struct node **ptr);
void display(struct node *top);
void travel(struct tnode *bintree);
main(){
	int i=0;
	printf("Enter the expression:\n");
	char treelist[]={'A','(','B','(','D','E',')','C','(','@','F',')',')','#'};
	struct node *top,*ptr,*lc,*rc,*parent;
	struct tnode *bintree;
	int tsize;
	int size=sizeof(struct node);
	top=NULL;
	i=0;
	while(treelist[i]!='#')
	{
		switch(treelist[i])
		{
			case ')':
				top=pop(top,&rc);
				top=pop(top,&lc);
				top=pop(top,&parent);
				parent->item->leftchild=lc->item;
				parent->item->rightchild=rc->item;
				top=push(top,parent);
				break;
			case '(':
				break;
			default:
				ptr=(struct node*)malloc(size);
				if(treelist[i]=='@')
				ptr->item=NULL;
				else
				{
					ptr->item->ch=treelist[i];
					ptr->item->leftchild=NULL;
					ptr->item->rightchild=NULL;
					ptr->next=NULL;
				}
				top=push(top,ptr);
				break;
		}
		i++;
	}
	top=pop(top,&ptr);
	bintree=ptr->item;
	printf("\nThe tree is..\n");
	travel(bintree);
}
struct node *push(struct node *top,struct node *ptr)
{
	ptr->next=top;
	top=ptr;
	return top;
}
struct node *pop(struct node *top,struct node **ptr)
{
	if(top==NULL)
	return NULL;
	*ptr=top;
	top=top->next;
	return top;
}
void display(struct node *top)
{
	if(top==NULL)
	printf("\n Stack Empty\n");
	else
	{
		printf("\n The Stack is:");
		while(top!=NULL)
		{
			printf("%c",top->item->ch);
			top=top->next;
		}
	}
}
void travel(struct tnode *bintree)
{
	if(bintree==NULL)return;
	travel(bintree->leftchild);
	printf("%c",bintree->ch);
	travel(bintree->rightchild);
}
