#include<stdio.h>
main()
{
	int i,hash[256]={0};
	char a[100];
	printf("Enter the string\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		int ascii_value=a[i]-'A';
		if(hash[ascii_value]==0)
		{
		hash[ascii_value]=1;
		printf("word-%c ",a[i]);
	    }
		else
		printf("repeat-%c ",a[i]);
    }
}
