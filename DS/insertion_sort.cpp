#include<stdio.h>
main()
{
	int a[10],i,j,n,temp;
	printf("Enter the size of list\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Sorted List:\n");
	for(i=0;i<n;i++)
	{
		j=i;
		while((a[j]<a[j-1])&&j>0)
		{
			temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
			j--;
		}
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
