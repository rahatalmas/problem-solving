#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){
        ll qnum;
        cin>>qnum;
        if(qnum==1){
          ll l,r,x;
          cin>>l>>r>>x;
          for(ll i=l-1;i<=r;i++){
              a[i]=a[i]+((x+i+1-l)*(x+i+1-l));
          }
          if(qnum==2){
              ll y;
              cin>>y;
              cout<<a[y-1]<<endl;
          }
        }
    }
}