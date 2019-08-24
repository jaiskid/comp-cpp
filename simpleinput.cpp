#include<iostream>
using namespace std;
int main(){
int sum=0;

while(true){
int n;
cin>>n;
sum+=n;
if(sum>=0){
	cout<<n<<endl;
}
else{
	break;
}
}
}
