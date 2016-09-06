#include<iostream>
using namespace std;
int main()
{
	int s=0,s1=1,s2=2,s3=3,s4=4,s5=5,s6=6,s7=7,s8=8,s9=9,s10=10;
	int cs,i=0;
	cout<<"Enter the number (+,- is necessary):";
	string str;
	cin>>str;
	cs=s;
	int n=str.length();
	for(i=0;i<str.length();)
	{
		if(cs==s)
		{//   +/- case
			if((str[i]=='+')||(str[i]=='-'))
			{
				
				cs=s1;
				i++;
				cout<<"\n+/- case"<<i;
			}
			else
				{
					break;
					cout<<"Error at s0";
				}
		}
		if(cs==s1)
		{//   digit case
			if((str[i]>='0')&&(str[i]<='9'))
			{
				i++;
				cout<<"\ndigit case"<<i;
				cs=s2;
			}
			else
				{
					break;
					cout<<"Error at s1";
				}
		}
		if(cs==s2)
		{//   decimal case
			if((str[i]>='0')&&(str[i]<='9'))
			{
				i++;
				cout<<"\ndigit case"<<i;
				cs=s2;
			}
			else
			if(str[i]=='.')
			{
				i++;
				cout<<"\n decimal case";
				cs=s3;
			}
			else
			if((str[i]=='e')||(str[i]=='E'))
			{
				i++;
				cs=s5;
				cout<<"\nE case";
			}
			else
				{
					break;
					cout<<"Error at s2";
				}
		}
		if(cs==s3)
		{//    digit after decimal case
			if((str[i]>='0')&&(str[i]<='9'))
			{
				
				i++;
				cs=s4;
			}
			else
				{
					break;
					cout<<"Error at s3";
				}
		}
		if(cs==s4)
		{//    E case
			if((str[i]=='E')||(str[i]=='e'))
			{
				i++;
				cout<<"\nE case"<<i;
				cs=s5;
			}
			else
			if((str[i]>='0')&&(str[i]<='9'))
			{
				i++;
				cs=s4;
			}
			else
				{
					break;
					cout<<"Error at s4";
				}
		}
		if(cs==s5)
		{
			if((str[i]=='+')||(str[i]=='-'))
			{
				i++;
				cs=s6;
				cout<<"\n+/- after E case"<<i;
			}
			else
				{
					break;
					cout<<"Error at s5";
				}
		}
		if(cs==s6)
		{
			
			if((str[i]>='0')&&(str[i]<='9'))
			{
				i++;
				cout<<"\nDigit after E case"<<i;
				cs=s7;
			}
			else
				{
					break;
					cout<<"Error at s6";
				}
		}
		if(cs==s7)
		{
			if((str[i]>='0')&&(str[i]<='9'))
			{
				i++;
				cout<<"\nDigit after E case"<<i;
				cs=s7;
			}
			else
			{
				break;
				cout<<"error at s7";
			}
		}
	}
	cout<<"\nSize of number"<<n<<endl<<"Size executed"<<i;
	if(i==n)
		{
			cout<<"\nVALID NUMBER";
		}
		else
		{
			cout<<"\nINVALID NUMBER";
		}
	return 0;
}
