#include <iostream>
using namespace std;
void merge(long long int *a,long long int s,long long int e){
    long long int mid = (s+e)/2;
    long long int temp[1000000];
    //storing final ans in temp array & we will copy it to main array later
    long long int i =s;
    long long int j = mid+1;
    long long int k =s;
    while(i<= mid && j<=e){
        if(a[i]<a[j]){
            temp[k++] = a[i++];  // this can also be written as temp[k++]= a[i++] bcz we are post incrementing so...it will be incremented in next line
            // k++;    
            // i++;
        }
        else{
            temp[k++] = a[j++];
        }
    }
    //if any one of these 2 parts gets exhaused i.e either i > mid or j>e then we print elements of other array till that also gets exhausted
    while(i<=mid){
        temp[k++] = a[i++]; /// read above comments
    }
    while(j<=e){
        temp[k++]= a[j++];
    }
    for(long long int i=s;i<=e;i++){
        a[i] = temp[i];
    }
}
void MergeSort(long long int a[],long long int s,long long int e){
    if(s>=e){
        return;
    }
    long long int mid = (s+e)/2;
    //sorting 2 parts seperately
    MergeSort(a,s,mid);
    MergeSort(a,mid+1,e);
    merge(a,s,e);
}
int main() {
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int s =0;
    long long int e =n-1;
    MergeSort(a,s,e);
    for(long long int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}