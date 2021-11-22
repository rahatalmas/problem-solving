#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if((a%2==0) && (b%2==0)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}