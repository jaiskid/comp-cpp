#include<iostream>
using namespace std;
bool ispallindrome(char *arr,int n){
	int s=0;
	int e=n-1;
	while(s<=e){
	if(arr[s]!=arr[e])
	{
		return false;
	}
		s++;
		e--;
}
	return true;
}
int main(){
	int n;
	cin>>n;
	char arr[1000];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	if(ispallindrome(arr,n)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}