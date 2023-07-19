#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[1000];
    for(int i=0,j=0;i<1000;i++){
        arr[i] = j;
        j++;
        if(j==t){
            j=0;
        }
    }
    for(int i=0;i<1000;i++){
        cout << "N[" << i << "] = " << arr[i] <<endl;
    }
}