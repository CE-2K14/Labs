#include<stdio.h>
int a[100],start,end,value,size,r,mid;
int rbinsearch(int [],int,int,int);
main()
{
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(start=0;start<size;start++)
		scanf("%d",&a[start]);
	printf("Enter the value to be found\n");
	scanf("%d",&value);
	r=rbinsearch(a,0,size-1,value);
	if(r==true)	
	    printf("The value found at %d\n",mid+1);
	else printf("Value not found\n");
}
int rbinsearch(int a[],int start,int end,int value)
{
	mid=(start+end)/2;
	if(start==end)
	{
		if(a[mid]==value)
			return true;
		else return false;
	}
	else
	{
		if(a[mid]==value)
			return true;
		else if(a[mid]>value)
			return rbinsearch(a,start,mid-1,value);
		else return rbinsearch(a,mid+1,end,value);
	}
}
