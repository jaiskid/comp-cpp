#include<iostream>
using namespace std;
int firstocc(int *arr,int key,int n){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
	int mid=(s+e)/2;
	if(arr[mid]==key){
	ans=mid;
	e=mid-1;
	}
	else if(arr[mid]>key){
	e=mid-1;
	}
	else{
	s=mid+1;
	}
	}
	return ans;
}
int lastocc(int *arr,int key,int n){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
	int mid=(s+e)/2;
	if(arr[mid]==key)
	{
	ans=mid;
	s=mid+1;
	}
	else if(arr[mid]>key){
	e=mid-1;
	}
	else{
	s=mid+1;
	}
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int arr[10005];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int t;
	cin>>t;
	while(t--){
		int key;
	cin>>key;
	cout<<firstocc(arr,key,n)<<" "<<lastocc(arr,key,n)<<endl;
	}
	
}