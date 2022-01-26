#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    if((x1*x1)/(y1*y1*y1) == (x2*x2)/(y2*y2*y2)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
  }
}

