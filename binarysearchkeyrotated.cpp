#include<iostream>
using namespace std;
int binary(int *arr,int s,int e,int key){
	if(s>e){
	return -1;
	}
	int mid=(s+e)/2;
	if(arr[mid]==key){
	return mid;
	}
	if(arr[s]<=arr[mid]){
	if(key>=arr[s]&&key<=arr[mid]){
	return binary(arr,s,mid-1,key);
	}
	else{
	return binary(arr,mid+1,e,key);
	}
	}
	if(key>=arr[mid]&&key<=arr[e]){
	return binary(arr,mid+1,e,key);
	}
	return binary(arr,s,mid-1,key);
}
int main
(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<binary(arr,0,n-1,key);

}