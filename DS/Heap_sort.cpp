#include<stdio.h>
#include<malloc.h>
int a[20],n,i,temp;
int adjust(int a[],int i,int n)
{
	int j;
	j=2*i;
	temp=a[i];
	while(j<=n)
	{
		if((a[j]<a[j+1])&&j<n)
		j++;
		if(a[j]<=temp)
		break;
		a[j/2]=a[j];
		j=2*j;
    }
	a[j/2]=temp;
}
int heapify(int a[],int n)
{
	for(i=n/2;i>=1;i--)
	adjust(a,i,n);
}
int delmax(int a[],int n)
{
	int t=a[1];
	a[1]=a[n];
	a[n]=t;
	adjust(a,1,n-1);
}
int heapsort(int a[],int n)
{
	heapify(a,n);
	for(i=n;i>i;i++)
	delmax(a,i);
}

int main()
{
	int k;
	printf("Enter the size of list\n");
	scanf("%d",&n);
	printf("Enter the list\n");
	for(k=1;k<=n;k++)
	scanf("%d",&a[k]);
	printf("Sorted list:\n");
	heapsort(a,n);
	for(k=1;k<=n;k++)
	printf("%d\t",a[k]);
}
