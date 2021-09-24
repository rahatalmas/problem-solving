#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll a,b;
        cin>>a>>b;
        if(a>b){
            cout<<a<<" "<<a+b<<endl;
        }else{
            cout<<b<<" "<<a+b<<endl;
        }
    }
}