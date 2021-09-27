#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        while(__gcd(a,b)!=1){
            a/=__gcd(a,b);
        }
         if(a==1){
              cout<<"YES"<<endl;
          }else{
              cout<<"NO"<<endl;
          }
    }
}