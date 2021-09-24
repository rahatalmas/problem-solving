#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll n;
    cin>>n;
    ll ec=0;
    ll oc=0;
    ll a;
    while(n--){
       cin>>a;
       if(a%2==0){
           ec++;
       }else{
           oc++;
       }
    }
    if(ec>oc){
        cout<<"READY FOR BATTLE"<<endl;
    }else{
        cout<<"NOT READY"<<endl;
    }
}