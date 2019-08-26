#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    long long x,y;
    cin>>n;
    if(n==1||n==2){
        cout<<-1<<endl;
        return 0; 
    }
    if(n>0)
    {
    if(n%2==0)
    {
        x=((n*n)/4)-1;
        y=((n*n)/4)+1;
    cout<<x<<" "<<y<<endl;
    }
    else{
        x=(n*n-1)/2;
        y=(1+n*n)/2;
    cout<<x<<" "<<y<<endl;
    }
    }
    else
    cout<<"-1"<<endl;
	return 0;
}