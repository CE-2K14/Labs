#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	char str[1000];
	int i=0,sz,s=0,n=0,t=0,r=0,v=0,flag=0;
	cin.getline(str,1000);
	while(str[i]!=0)
	{
		if(((str[i]==95)||((str[i]>96)&&(str[i]<123)))&&(flag==0)&&(str[i-1]!=92))
		{
			v++;
			flag=1;
		}
		else
		if(str[i]==32)
		{
			flag=0;
			s++;
		}
		else
		if(str[i]==92)
		{
			flag=0;
			if(str[i+1]==110)
			{
				n++;
			}
			else
			if(str[i+1]==116)
			{
				t++;
			}
			else
			if(str[i+1]==114)
			{
				r++;
			}
		}
		i++;
	}
	cout<<"space:"<<s<<endl<<"new line:"<<n<<endl<<"tab:"<<t<<endl<<"\r:"<<r<<endl<<"v is:"<<v;
	return 0;
}
