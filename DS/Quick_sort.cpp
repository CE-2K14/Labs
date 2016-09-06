 /*Quick Sort*/
 #include<stdio.h>
 int part(int [10],int,int);
int quicksort(int [10],int,int);


int main()
{
	int a[10];
	int k;
	int n;
	printf("Enter the size of list\n");
	scanf("%d",&n);
	printf("Enter the list\n");
	for(k=0;k<n;k++)
	{
	scanf("%d",&a[k]);
    }
	quicksort(a,0,n-1);
	printf("Sorted List:-\n");
	for(k=0;k<n;k++)
	printf("%d\n",a[k]);
}
int quicksort(int a[],int low,int high)
{
	int p;
	if(low<high)
	{
		p=part(a,low,high);
		quicksort(a,low,p-1);
		quicksort(a,p+1,high);
	}
}
int part(int a[],int low,int high)
{
	
	int i,j;
	int pivot=a[low];
	i=low+1;j=high;
	int temp;
	while(i<=j)
	{
		while(a[i]<=pivot&&i<high)
			i=i+1;
		while(a[j]>pivot)
			j=j-1;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	a[low]=a[j];
	a[j]=pivot;
	return j;
}


