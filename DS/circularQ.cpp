#include<stdio.h>
int CQ[100],r,f,value,N,i;
int addcirQ(int [],int *f,int *r,int value,int N);
int delcirQ(int [],int *f,int *r,int N);
void display(int [],int,int,int);
main()
{
	f=0;r=0;
	int n;
	printf("Enter the Max size of Queue\n");
	scanf("%d",&N);
	do
	{
		printf("\n1.for add\n");
		printf("2.for delete\n");
		printf("3.for display\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("Enter the value\n");
				scanf("%d",&value);
				addcirQ(CQ,&f,&r,value,N);
				display(CQ,f,r,N);
				break;
			case 2:
				delcirQ(CQ,&f,&r,N);
				display(CQ,f,r,N);
				break;
			case 3:
				display(CQ,f,r,N);
				break;
		}
	}while(n!=4);
}
int addcirQ(int CQ[],int *f,int *r,int value,int N)
{
	if(*f==(*r+1)%N)
	{
		printf("Queue overflow\n");
	}
	else
	{
		*r=(*r+1)%N;
		CQ[*r]=value;
	}
}
int delcirQ(int CQ[],int *f,int *r,int N)
{
	if(*f==*r)
	{
		printf("Queue empty\n");
	}
	else
	{
	*f=(*f+1)%N;
	int val=CQ[*f];
	return(val);
    }
}
void display(int CQ[],int f,int r,int N)
{
	i=f;
	while(i!=r)
	{
		i=(i+1)%N;
		printf("%d ",CQ[i]);
	}
}
