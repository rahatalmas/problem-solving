#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll match[5];
        ll win=0,loss=0;
        for(int i=0;i<5;i++){
            cin>>match[i];
            if(match[i] == 1){
                win++;
            }else if(match[i] == 2){
                loss++;
            }
        }
        if(win>loss){
            cout<<"INDIA"<<endl;
        }else if(loss>win){
            cout<<"ENGLAND"<<endl;
        }else{
            cout<<"DRAW"<<endl;
        }
    }
}