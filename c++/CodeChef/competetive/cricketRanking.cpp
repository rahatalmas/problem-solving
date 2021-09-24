#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;
        ll ac=0;
        ll bc=0;
        if(a>x || b>x || c>z){
            ac++;
        }
        if(x>a || y>b || z>c){
            bc++;
        }
        if(ac>bc){
            cout<<"A"<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
}