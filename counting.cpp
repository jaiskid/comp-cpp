#include<iostream>
using namespace std;
void counting(int *a,int n,int max){
	int count[1000000]={0};
	for(int i=0;i<n;i++)
	{
      count[a[i]]++;
	}
	for(int i=0;i<=max;i++){
		for(int j=1;j<=count[i];j++){
			cout<<i<<" ";
		}
	}
}
int main(){
	int n;cin>>n;
	int a[1000000];
	;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=a[0];
	for(int i=0;i<n;i++){
	if(max<a[i]){
		max=a[i];
	}
	}
	counting(a,n,max);
}