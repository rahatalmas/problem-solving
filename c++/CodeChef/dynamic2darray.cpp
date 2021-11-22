#include<bits/stdc++.h>
using namespace std;

int main(){
    int **M = new int*[2];
    for(int i=0;i<2;i++){
        M[i]= new int[2];
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>M[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}