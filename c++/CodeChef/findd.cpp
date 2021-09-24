#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x;
    cin>>x;
    if(x>4){
      x%=4;
    }
    if(x==1){
      cout<<"East"<<endl;
    }else if(x==2){
      cout<<"South"<<endl;
    }else if(x==3){
      cout<<"West"<<endl;
    }else{
      cout<<"North"<<endl;
    }
  }
}
