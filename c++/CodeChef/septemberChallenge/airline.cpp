#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(a+b <= d && c<=e){
            cout<<"Yes"<<endl;
        }else if(b+c <= d && a<=e){
            cout<<"Yes"<<endl;
        }else if(c+a <= d && b<=e){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}