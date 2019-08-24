#include <iostream>
using namespace std;

int main(){
    int s, e,inc;
    cin>>s>>e>>inc;
    for (int i=s;i<=e;i=i+inc){
        float ans=5.0/9*(i-32);
        cout<<i<<" "<<(int(ans*1000))/1000<<endl;
    }
}