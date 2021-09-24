#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll a,b,c;
        ll x,y,z;
        cin>>a>>x>>b>>y>>c>>z;
        if(x>=a and y>=b and z<=c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}