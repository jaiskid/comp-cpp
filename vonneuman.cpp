#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int p=1;
	int sum=0;
	while(n!=0){
	int rem=n%10;
	sum+=rem*p;
	p*=2;
	n/=10;
	}
	cout<<sum<<endl;
	}

}