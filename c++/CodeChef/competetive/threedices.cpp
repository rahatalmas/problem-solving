#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll sum=a+b;
        if(sum<3){
            cout<<1<<endl;
        }else if(sum>=3 && sum<=10){
            cout<<2<<endl;
        }
        else if(sum>=11 && sum<=60){
            cout<<2<<endl;
        }else{
            cout<<4<<endl;
        }
    }
    
}