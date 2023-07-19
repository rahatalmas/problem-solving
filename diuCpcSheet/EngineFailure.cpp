#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int failptr=0;
    for(int i=1,j=0;i<n;i++){
        if(arr[i]<arr[j]){
            failptr = i;
            break;
        }
        j++;
    }
    if(failptr > 0 ){
        failptr+=1;
    }
    cout << failptr << endl;
}