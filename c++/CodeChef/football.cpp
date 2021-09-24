#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,a,b;
    cin>>n;
    vector<ll>goal(n);
    vector<ll>faul(n);
    vector<ll>ans(n);
    for(int i=0;i<n;i++){
     cin>> goal[i];
    }
    for(int i=0;i<n;i++){
     cin>>faul[i];
    }
    for(int i=0;i<n;i++){
     ll score= ((goal[i]*20)-(faul[i]*10));
     ans[i] = score<0?0:score;
    }
    sort(ans.begin(),ans.end());
    cout<<ans[n-1]<<endl;
 }
}
