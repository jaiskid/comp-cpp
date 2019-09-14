#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void suffle(long long int *a,int s,int e){
	srand(time(NULL));
	int i,j;
	for(int i=e;i>0;i--){
	j=rand()%(i+1);
	swap(a[i],a[j]);
	}
}
int partion(long long int *a,int s,int e){
	int i=s-1;
	int j=s;
	int pivot=a[e];
	for(;j<e;j++){
	if(a[j]<=pivot){
	i++;
	swap(a[i],a[j]);
	}
	}
	swap(a[i+1],a[e]);
	return i+1;
}
void quicksort(long long int *a,int s,int e){
	if(s>=e){
	return;
	}
	int p=partion(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);
}
int main(){
	int n;cin>>n;
	long long int a[1000005];
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	suffle(a,0,n-1);
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
	}
}