/* 
   array reverse using pointer...
   no build in library...
   author @rahat almas...
   
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void swap(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void arrayRev(int arr[],int n){
    int * p1 = arr;
    int * p2 = arr+n;
    while(p1<p2){
        swap(p1,p2);
        p1++;
        p2--;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"before reverse: ";
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    arrayRev(arr,n-1);
    cout<<"after reverse: ";
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}