#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count=0;
        vector<ll>v(n);
        unordered_map<ll,ll>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto x:mp){
            if(x.second > x.first-1){
                count+=x.first-1;
            }else{
                count+=x.second;
            }
        }
        cout<<count<<endl;
    }
}