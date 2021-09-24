#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
      ll a,b,c;
      cin>>a>>b>>c;
      ll count1=0;
      ll count2=0;
      if(a==1 || b==1 || c==1){
          count1++;
      }
      if(a==0 || b==0 || c==0){
         count2++;    
      }
      if(count1 >=1 && count2>=1){
          cout<<1<<endl;
      }else{
          cout<<0<<endl;
      }
    }
}