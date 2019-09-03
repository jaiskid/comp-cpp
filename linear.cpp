#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int key;
	cin>>key;
	int i;
	for(i=0;i<n;i++){
	if(arr[i]==key){
	cout<<"Key found "<<i;
	break;
	}
	}
	if(i==n)
	cout<<"Not found";

}