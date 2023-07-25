#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int n;
        cin >> n;
        if(n==0){
            break;
        }else{
            int arr[n];
            for(int i=0;i<n;i++){
                cin >> arr[i];
            }
            int lidx=0;
            int slidx = 1;
            for(int i=1;i<n;i++){
                if(arr[i]>arr[lidx]){
                    slidx = lidx;
                    lidx = i;
                }else if(arr[i]>arr[slidx]){
                    slidx = i;
                }
            }
            cout << slidx+1 << endl;
        }
    }
}