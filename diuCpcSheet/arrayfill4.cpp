#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[15];
   int k = 0;
   for(int i=0;i<15;i++){
     cin >> arr[i];
   }
   for(int i=0,j=0;i<15;i++){
      if(arr[i]%2 == 0){
        cout << "par[" << j << "] = " << arr[i] <<endl;
        j++;
      }
      if(j==5){
        k = i;
        //cout << " K " << k;
        break;
      }
   }
   for(int i=0,j=0;i<15;i++){
        if(arr[i]%2!=0){
            cout << "impar[" << j << "] = " << arr[i] << endl;
            j++;
        }
        if(j==5){
            j=0;
        }
   }
   for(int i = k+1,j = 0;i<15;i++){
         if(arr[i]%2==0){
             cout << "par[" << j << "] = " << arr[i] << endl;;
             j++;
         }
         if(j == 5){
            j=0;
         }
   }
}