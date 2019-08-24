#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int key;
	cin>>key;
	int count =0;
	while(n!=0){
	int rem=n%10;
	if(rem==key){
	count++;
	}
	n/=10;
	}
	cout<<count;
}