#include<iostream>
using namespace std;
int main(){
	int S0=0,S1=1,S2=2,S3=3,S4=4,S5=5;
	string str;
	int i;
	int CS=S0;
	
	cout<<"Enter the Expression"<<endl;
	cin>>str;
	int l=str.length();
	int m=l-1;
	for(i=0;i<l;){
		if(CS==S0){
			if(str[i]=='a'){
				
				CS=S1;
				i++;
				//cout<<CS<<"\n";
			}
			else break;
		}
		else if(CS==S1){
			if(str[i]=='b'){
				CS=S1;
				i++;
				//cout<<CS<<"\n";
			}
			else if(str[i]=='a'){
				CS=S2;
				i++;
				//cout<<CS<<"\n";
			}
			else break;
		}
		else if(CS==S2){
			if(str[i]=='b'){
				CS=S3;
				i++;
				//cout<<CS<<"\n";
				//cout<<i<<"\n"<<l<<"\n";
			}
			else if(str[i]=='a'){
				CS=S2;
				i++;
			//	cout<<CS<<"\n";
			}
			else break;
		}
		else if(CS==S3){
			if(str[i]=='b'){
				CS=S4;
				i++;
				//cout<<CS<<"\n";
				
			}
			else if(str[i]=='a'){
				
				CS=S2;
				i++;
				//cout<<CS<<"\n";
			}
			else break;
		}
		else if(CS==S4){
			if(str[i]=='b'){
				
				CS=S1;
				i++;
				//cout<<CS<<"\n";
				//cout<<"i=%d"<<i;
				//break;
			}
			else if(str[i]=='a'){
				
				CS=S2;
				i++;
				//cout<<CS<<"\n";
				//cout<<"i=%d"<<i;
			}
			else if(str[i]=='b'){
				CS=S4;
				cout<<CS;
				break;
			}
			
		}
		
	}
	if(CS==S4)
	cout<<"Valid expression"<<endl;
	else
	cout<<"Invalid"<<endl;
}
