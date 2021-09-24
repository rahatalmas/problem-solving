#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void result(ll x,ll y,ll count){
   ll temp = x;
   ll temp2 = y;
   for(int i=2,j=1;i<x;i+=2,j++){
       count++;
       if( (temp-i)+(temp2-j)==x){
         cout<<count<<endl;
         break;
       }
   }
}
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,y;
    cin>>x>>y;
    ll count=0;
     if(x<=y){
    	 cout<<0<<endl;
     }
     else{
       result(x,y,count);
       }
    }
}
