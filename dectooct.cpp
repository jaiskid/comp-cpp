#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p=1;
	int sum=0;
	while(n!=0){
	int rem=n%8;
	sum=sum+rem*p;
    p*=10;
    n/=8;
	}
	cout<<sum;
}