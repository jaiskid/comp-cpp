//logic is clear in this sorting technique the minimum element come in front
#include<iostream>
using namespace std;
void selection(int *arr,int n){
	for(int i=0;i<n-1;i++){
	int minindex=i;
	for(int j=i+1;j<n;j++){
	if(arr[minindex]>arr[j]){
	minindex=j;
	}
	}
	swap(arr[minindex],arr[i]);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	selection(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}