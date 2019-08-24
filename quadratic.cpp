#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int d=b*b-4*a*c;
	if(d>0){
	int r1=(-b+sqrt(d))/2*a;
	int r2=(-b-sqrt(d))/2*a;
	cout<<"Real and Distinct"<<endl;
	if(r1>r2)
	cout<<r2<<" "<<r1;
	else
	cout<<r1<<" "<<r2;
	}
	else if(d==0){
	int r1=-b/2*a;
	cout<<"Real and Equal"<<endl;
	cout<<r1<<" "<<r1;
	}
	else{
	cout<<"Imaginary root"<<endl;
	}
}