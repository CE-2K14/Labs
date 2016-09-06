/* Binary Search without recursion*/
#include<stdio.h>
#define chal(n) for(start=0;start<size;start++)
main()
{
	int a[10],start,end,mid,size,value,flag=0;
	printf("Enter the size\n");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	chal(n)
		scanf("%d",&a[start]);
	printf("Enter the value to be found\n");
	scanf("%d",&value);
	start=0;end=size-1;;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(a[mid]==value)
		{
			flag=1;
			break;
		}
		else if(a[mid]>value)
			end=mid-1;
		else
			start=mid+1;
    }
    if(flag==1)
		printf("Value found at %d",mid+1);
	else printf("Value not found in array");
}
