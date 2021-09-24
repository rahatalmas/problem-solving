#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll m,h;
        cin>>m>>h;
        ll bmi = m/(h*h);
        if(bmi<=18){
            cout<<1<<endl;
        }else if(bmi >18 && bmi <25){
            cout<<2<<endl;
        }else if(bmi >24 && bmi <30){
            cout<<3<<endl;
        }else{
            cout<<4<<endl;
        }
    }
}