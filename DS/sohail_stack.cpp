 #include<stdio.h>
int top,status,value,MAX;
int push(int stack[],int value)
{
	if(top==MAX-1)
	{
		status=0;
	}
	else
	{
		status=1;
		++top;
		stack[top]=value;
	}
}
int pop(int stack[])
{
	int ret;
	if(top==-1)
	{
	//	ret=0;
		status=0;
	}
	else
	{
		status=1;
		ret=stack[top];
		--top;
	}
	return ret;
}	
int display(int stack[])
{
	if(top==-1)
	{
		printf("Empty\n");
	}
	else
	{
		int i;
		for(i=top;i>=0;--i)
		{
			printf("\n%d\n",stack[i]);
		}
		printf("\n");
	}
}
int main()
{
	printf("Enter the size of stack\n");
	scanf("%d",&MAX);
	int stack [MAX],n;
	top=-1;
	do
	{
		do
		{
		printf("\nMain Screen\n ");
		printf("1. for push\n");
		printf("2. for pop\n");
		printf("3. for Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&n);
	    }while(n<1||n>3);
		switch(n)
		{
			case 1:
				printf("Enter the value to be pushed\n");
				scanf("%d",&value);
				push(stack,value);
				if(status)
				{
					printf("Value after pushing\n");
					display(stack);
				}
				else
				{
					printf("Stack Overflow\n");
				}
				break;
			case 2:
			 	value=pop(stack);
			 	if(status)
			 	{
			 		printf("Value after poping\n");
			 		display(stack);
			 	}
			 	else
			 	{
			 		printf("Stack Underflow\n");
			 	}
			 	break;
			 default:
			 	printf("Execution Complete\n");
			 	
		}
	}while(n!=3);
	printf("Thanks for using my program\n");
}
