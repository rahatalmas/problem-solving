#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        int cur = arr[i];
        int j = i-1;
        while(j>=0 && (arr[j]>cur)){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=cur;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return EXIT_SUCCESS;
}