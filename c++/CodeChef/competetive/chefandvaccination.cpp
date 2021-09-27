#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,p,x,y;
       cin>>n>>p>>x>>y;
       vector<ll>v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       } 
       ll ep=0;
       ll child=0;
       for(int j=0;j<p;j++){
           if(v[j]==1){
               ep++;
           }
           if(v[j]==0){
               child++;
           }
       }
       //cout<<ep<<" "<<child<<endl;
       cout<<(x*child)+(y*ep)<<endl;
    }
}