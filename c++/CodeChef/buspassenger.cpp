#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,q;
        cin>>n>>m>>q;
        ll count = 0;
        for(int i=0;i<q;i++){
           char ch;
           ll p;
           cin>>ch>>p;
           if(count>m){
               cout<<"Inconsistent"<<endl;
               break;
           }
           if(ch == '+'){
               count++;
           }
           if(ch == '-'){
               count--;
           }
        }
        if(count<=m){
            cout<<"Consistent"<<endl;
        }
    }
}