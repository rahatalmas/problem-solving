#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void build(int idx,int arr[],int n){
    int largest = idx;
    int l = 2*idx+1;
    int r = 2*idx+2;
    if(l<n && arr[l] > arr[largest]){
        largest = l;
    }
    if(r<n && arr[r] > arr[largest]){
        largest = r;
    }
    if(largest != idx){
        swap(arr[idx],arr[largest]);se
        build(largest,arr,n);
    }
}

void heapBuilder(int arr[], int n){
    int idx = (n/2)+1;
    for(int i=idx;i>=0;i--){
        build(i,arr,n);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    heapBuilder(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}