#include<stdio.h>
int CQ[100],r,f,value,N,i;
int addcirQ();
int delcirQ();
void display();
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
				addcirQ();
				display();
				break;
			case 2:
				delcirQ();
				display();
				break;
			case 3:
				display();
				break;
		}
	}while(n!=4);
}
int addcirQ()
{
	if(f==(r+1)%N)
	{
		printf("Queue overflow\n");
	}
	else
	{
		r=(r+1)%N;
		CQ[r]=value;
	}
}
int delcirQ()
{
	if(f==r)
	{
		printf("Queue empty\n");
	}
	else
	{
	f=(f+1)%N;
	int val=CQ[f];
	return(val);
    }
}
void display()
{
	i=f;
	while(i!=r)
	{
		i=(i+1)%N;
		printf("%d ",CQ[i]);
	}
}

