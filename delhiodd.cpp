#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
	int n;
cin>>n;
int esum=0;
int osum=0;
while(n!=0){
	int rem=n%10;
	if(rem%2==0){
	esum+=rem;
	}
	else{
	osum+=rem;
	}
	n/=10;
}
if(esum%4==0||osum%3==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
}