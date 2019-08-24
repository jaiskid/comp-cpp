#include<iostream>
using namespace std;
bool inc(int *arr,int n){
	int i,j;
	for(i=1;i<n;i++){
	if(arr[i-1]>arr[i]){
	continue;
	}
	if(arr[i-1]<=arr[i])
	break;
	}
	if(i==n-1)
	return 1;
	for(j=i+1;j<n;j++){
	if(arr[j]>arr[j-1])
		continue;
		if(arr[j]<=arr[j-1])
		break;
	}
	i=j;
	if(i!=n)
	return 0;
	return 1;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	bool ans=inc(arr,n);
	if(ans){
	cout<<"True";
	}
	else{
	cout<<"False";
	}

}