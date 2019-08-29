#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a=0,b=1;
int sum=0;
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
	cout<<a<<" ";	

	sum=a+b;
	a=b;
	b=sum;
}
cout<<endl;
}	
}
