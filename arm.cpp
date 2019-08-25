#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int d=n;
	int sum =0;
	while(n!=0)
	{
	int rem=n%10;
	sum+=pow(rem,3);
	n/=10;
	}

	if(sum==d){
	cout<<"True";
	}
	else{
	cout<<"false";
	}
}