#include<iostream>
using namespace std;
int main()
{
	int q[10],i,val,ch,f=0,r=0;
	do
	{
		int flag=0;
		cout<<endl<<"=====MENU====="<<endl;
		cout<<"1-Insert"<<endl;
		cout<<"2-Delete"<<endl;
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
					if(f>=10)
					cout<<"Queue is full.";
					else
					{
						q[f]=val;
						f++;
						cout<<val<<" is inserted.";
					}
				}
				break;
			case 2:
				{
					if(f==r)
					cout<<"Queue is empty.";
					else
					{
						val=q[r];
						r++;
						cout<<val<<" is removed";
					}	
				}
				break;
			case 3:
				{
					cout<<"Enter the value to search in stack:";
					cin>>val;
					for(i=r;i<f;i++)
					{
						if(val==q[i])
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
