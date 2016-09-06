#include<iostream>
using namespace std;
int main()
{
	int s[10],t=0,i,val,ch;
	do
	{
		int flag=0;
		cout<<endl<<"=====MENU====="<<endl;
		cout<<"1-Push"<<endl;
		cout<<"2-Pop"<<endl;
		cout<<"3-Search"<<endl;
		cout<<"4-Exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					cout<<"Enter the val:";
					cin>>val;
					if(t>=10)
					cout<<"Stack is overflowing.";
					else
					{
						s[t]=val;
						t++;
						cout<<val<<" is pushed in stack.";
					}
				}
				break;
			case 2:
				{
					if(t==0)
					cout<<"Stack is underflowing.";
					else
					{
						val=s[t-1];
						t--;
						cout<<val<<" is poped";
					}	
				}
				break;
			case 3:
				{
					cout<<"Enter the value to search in stack:";
					cin>>val;
					for(i=0;i<t;i++)
					{
						if(val==s[i])
						{
							flag=1;
						}
					}
					if(flag==1)
					cout<<"Data is found";
					else
					cout<<"Data not found";
				}
				break;		
		}
	}
	while(ch!=4);
}
