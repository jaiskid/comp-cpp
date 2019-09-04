#include<iostream>
using namespace std;
void insertion(int *arr,int n){
	for(int i=1;i<n;i++){
	int j=i-1;
	int no=arr[i];
	while(j>=0&&arr[j]>no){
	arr[j+1]=arr[j];
	j--;
	}
	arr[j+1]=no;
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
	insertion(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}