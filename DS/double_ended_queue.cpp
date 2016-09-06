#include<stdio.h>
#define MAX 5
int f=-1,r=-1,value,status;
int addleft(int a[],int f,int r,int value)
{
	if(r==MAX-1)
	{
		status=0;
	}
	else
	{
	status=1;
	++r;
	a[r]=value;
    }
}
int deleteleft(int a[],int f,int r,int value)
{
	int  ret;
	if(f==-1)
	{
		status=0;
	}
	status=1;
	++f;
	ret=a[f];
	return ret;
}
int deleteright(int a[],int f,int r,int value)
{
	int ret1;
	if(r==-1)
	{
		status=0;
	}
	--r;
	ret1=a[r];
	return ret1;
}
int addright(int a[],int f,int r,int value)
{
	if(f==-1)
	{
		status=0;
	}
	else
	{
		status=1;
	--f;
	a[f]=value;
    }
}
main()
{
	int a[MAX];
	int n;
	do
	{
		printf("\n1. addleft\n");
		printf("2. deleteleft\n");
		printf("3. deleteright\n");
		printf("4. addright\n");
		printf("5. Exit");
		printf("Enter the choice\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("Enter the value: ");
					if(status==0)
					{
				printf("Overflow\n");
			        }
				scanf("%d",&value);
				addleft(a,f,r,value);
				break;
			
			case 2:
				int b;
				b=deleteleft(a,f,r,value);
				if(status==0)
				printf("Underflow\n");
				else
				printf("value deleted is :%d ",b);
				break;
			case 3:
				int c;
				c =deleteright(a,f,r,value);
			    if(status==0)
			    printf("Underflow\n");
			    else
			    printf("Deleted value is: %d\n",c);	
			case 4:
				printf("Enter the value\n");
				scanf("%d",&value);
				addright(a,f,r,value);
				if(status==0)
				printf("Overflow\n");
				break;
		}
	}while(n!=5);
}
