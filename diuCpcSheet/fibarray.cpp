#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

ll fib(int n,ll arr[]){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(arr[n-1] != -1){
        return arr[n-1];
    }
    arr[n-1] = fib(n-1,arr) + fib(n-2,arr);
    return arr[n-1];
}


int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n];
        for(int i=0;i<n;i++){
            arr[i] = -1;
        }
        cout << "Fib(" << n << ") = " << fib(n,arr) << endl;
    }
}