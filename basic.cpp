#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	int n1,n2;
	while(ch!='x'&ch!='X'){
	switch(ch)
	{
			case '+':
			cin>>n1>>n2;
			cout<<n1+n2<<endl;
			break;
			case '-':
			cin>>n1>>n2;
			cout<<n1-n2<<endl;
			break;
			case '*':
			cin>>n1>>n2;
			cout<<n1*n2<<endl;
			break;
			case '/':
			cin>>n1>>n2;
			cout<<n1/n2<<endl;
			break;
			case '%':
			cin>>n1>>n2;
			cout<<n1%n2<<endl;
			break;
			default:
			cout<<"Invalid operation. Try again."<<endl;
		}
		cin>>ch;
	}
	}