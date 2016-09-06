#include<stdio.h>
#define MAX 2
int f=-1,r=-1,value,q[MAX];
int insert()
{
	printf("Enter the value\n");
	scanf("%d",&value);
	if(f==0 && r>=MAX-1)
	{
		printf("Queue overflow\n");
	}
	else if(r==-1 && f==-1)
	{
		r=f=0;
		q[r]=value;
	}
	else if(r==MAX-1 && f!=0)
	{
		r=0;
		q[r]=value;
	}
	else 
	{
		r++;
		q[r]=value;
	}
}
int del()
{
	if(f==-1)
	{
		printf("Under Flow\n");
	}
	value=q[f];
	if(f==r)
	{
		f=r=-1;
	}
	else 
	{
		if(f==MAX-1)
		f=0;
		else
		{
			f++;
			printf("Value Deleted:%d",value);
		}
	}
}
main()
{
	int n;
	do
	{
		do
		{
			printf("\n1.for insert value\n");
			printf("2.for deleting\n");
			printf("3.for exit\n");
			printf("Enter your choice\n");
			scanf("%d",&n);
		}while(n<1||n>3);
		switch(n)
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			default:
				printf("Invalid case\n");
		}
	}while(n!=3);
	printf("Thanks for using my program\n");
}
