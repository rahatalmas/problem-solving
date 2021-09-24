#include<bits/stdc++.h>
using namespace std;
#define ll long double 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        ll sum =0;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(a<b){
            sum =ceil((b-(a+1))/2)+ ceil(((a+1)-a)/2);
            cout<<sum<<endl;
        }
        else{
            sum = ceil((b-(a-2))/2) + ceil(((a-2)-a)/2);
            cout<<sum<<endl;
        }
    }
}