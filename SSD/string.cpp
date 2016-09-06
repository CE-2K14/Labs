#include<iostream>
using namespace std;
int main()
{
	string str;
	int i,ch,j,p,s,k;
	cout<<"Enter the string:";
	cin>>str;
	int n=str.length();
	do
	{
		cout<<endl<<"=======MENU======="<<endl;
		cout<<"1-Prefix"<<endl;
		cout<<"2-Suffix"<<endl;
		cout<<"3-Proper Prefix"<<endl;
		cout<<"4-Proper Suffix"<<endl;
		cout<<"5-All Substring"<<endl;
		cout<<"6-Exit"<<endl;
		cout<<"Enter your choice:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				cout<<"Enter the length of prefix:";
				cin>>p;
				cout<<"Prefix is:";
				for(i=0;i<p;i++)
				cout<<str[i];
				cout<<endl;
			}
			break;
			case 2:
			{
				cout<<"Enter the length of suffix:";
				cin>>s;
				cout<<"Suffix is:";
				for(i=s-1;i<n;i++)
				cout<<str[i];
				cout<<endl;
			}	
			break;
			case 3:
			{
				cout<<"Proper prefixes are:"<<endl;
				for(i=0;i<n;i++)
				{
					for(j=0;j<n-i;j++)
					{
						if(i!=0)
						cout<<str[j];
					}
					cout<<endl;
				}
			}
			break;
			case 4:
			{
				cout<<"\nProper Suffixes are\n";
				for(i=0;i<n;i++)
				{
					for(j=0;j<i;j++)
					cout<<" ";
					for(j=i;j<n;j++)
					{
						if(i!=0)
						cout<<str[j];
					}
					cout<<endl;
				}
			}
			break;
			case 5:
			{
				cout<<"All possible substring are:"<<endl;
				for(i=0;i<n;i++)
				{
					for(j=i;j<n;j++)
					{
						for(k=i;k<j+1;k++)
						cout<<str[k];
						cout<<endl;
					}
				}	
			}
			break;
		}
	}
	while(ch!=6);
	return 0;
}
