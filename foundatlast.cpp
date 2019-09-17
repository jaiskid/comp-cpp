#include<iostream>
using namespace std;
int index(int *a,int n,int key){
    for(int i=n-1;i>=0;i--){
        if (a[i]==key){
            return i;
        }
    
    
}
return -1;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
   cout<<index(a,n,key);
   return 0;
}