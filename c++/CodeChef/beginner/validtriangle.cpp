#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b+c) == 180){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}