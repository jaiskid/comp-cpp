#include<iostream>
using namespace std;
float sqaureroot(int no,int p){
	int s=0;
	int e=no;
	float ans;
	while(s<=e){
	int mid=(s+e)/2;
	if(mid*mid==no)
	{
		ans=mid;
		break;
	}
	else if(mid*mid<no){
	s=mid+1;
	ans=mid;
	}
	else{
	e=mid-1;
	}
	float inc=0.1;
	for(int i=0;i<p;i++){
		while(ans*ans<=no){
			ans+=inc;
		}
		ans=ans-inc;
		inc=inc/10;
	}
	
}
		return ans;
}
int main(){
	int n;
	cin>>n;
	int p;
	cin>>p;
	cout<<sqaureroot(n,p);
}