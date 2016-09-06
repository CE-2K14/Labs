#include<iostream>
using namespace std;
int main()
{
	int s=0,s1=1,s2=2,s3=3,s4=4,s5=5,s6=6,flag=0,flag1=0;
	string str;
	int i,cs=s;
	cout<<"Enter a string"<<endl;
	cin>>str;
	int n=str.length();
	cout<<str<<n;
	for(i=0;i<n;)
	{
		flag1=0;
		cout<<"in loop"<<endl;
		if(cs==s)
		{
			cout<<"In s"<<endl;
			if((str[i]>='0')&&(str[i]<='9'))
			{
				i++;
				cout<<"Digit case  "<<i<<endl;
				cs=s1;	
				flag1=1;
			}
			else
			{
				break;
				cout<<"Error at s"<<endl;
			}
		}
		if(cs==s1)
		{
			cout<<"in s1"<<endl;
			if((str[i]>='0')&&(str[i]<='9'))
			{
				i++;
				cout<<"Digit case  "<<i<<endl;
				cs=s1;	
				flag1=1;
			}
			else
			if((str[i]=='+')||(str[i]=='-')||(str[i]=='*')||(str[i]=='/'))
			{
				flag=1;
				i++;
				cout<<"Operation case"<<endl;
				cs=s;
			}
			else
			{
				break;
				cout<<"Error at s"<<endl;
			}
		}
	}
	cout<<i<<endl;
	if((i==n)&&(flag==1)&&(flag1==1))
	{
		cout<<"VALID"<<endl;
	}
	else
	cout<<"INVALID"<<endl;
}
