#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int maxdigit(int x){
    int c=0;
    while(x>0){
        x=x/10;
        c++;
    }
    return c;

}


int makequal(int num,int maxdig){

   
    int x=maxdigit(num);

    int r=maxdig-x;

    return num*(pow(10,r));

    
}

int main() {

    int t;
    cin>>t;
    while(t>0){

        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        int x=a[n-1];

        int maxdig=maxdigit(x);
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=makequal(a[i],maxdig);
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                if(arr[i]<arr[j]){

                    int temp;
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;

                }


            }



        }


        for(int i=n-1;i>=0;i--){
            cout<<a[i];
        }

        cout<<endl;




        t--;
    }
	return 0;
}