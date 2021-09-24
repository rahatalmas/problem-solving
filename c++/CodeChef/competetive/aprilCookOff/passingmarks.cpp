#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y,z,min,a,b,c;
        cin>>x>>y>>z>>min>>a>>b>>c;
        ll totalm = a+b+c;
        if(a>=x && b>=y && c>=z){
            if(totalm>=min){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}