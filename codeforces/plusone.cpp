#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
  ll t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   vector<ll>v(n);
   for(ll i=0;i<n;i++){
      cin>>v[i];
   }
   sort(v.begin(),v.end());
   cout<<v[n-1]-v[0]<<endl;
  }
}
