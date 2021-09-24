#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0); 
ll t;
 cin>>t;
 while(t--){
  ll n,k,d,p;
  cin>>n>>k>>d;
  ll sum=0;
  for(ll i=0;i<n;i++){
   cin>>p;
   sum+=p;
  }
  if(sum<k){
   cout<<0<<endl;
  }else{ 
    if((sum/k)>d){
    cout<<d<<endl;
    }else{
    cout<<sum/k<<endl;
    }
  }
 }
}
