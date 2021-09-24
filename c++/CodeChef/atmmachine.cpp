#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
   ll t;
   cin>>t;  
   while(t--){
     ll n,k;
     cin>>n>>k;
     vector<ll>v(n);
     for(int i=0;i<n;i++){
       cin>>v[i]; 
     }
     for(int i=0;i<n;i++){
      if(v[i]<=k){
        cout<<1;
        k=k-v[i];
       }else{
        cout<<0;
       }
     }
     cout<<endl;
    }
  }
     
