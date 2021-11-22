#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll d,n,k,h,s,e;
        cin>>d>>n>>k;
        vector<pair<ll,pair<ll,ll>>>v;
        for(int i=0;i<n;i++){
            cin>>h>>s>>e;
            v.push_back(make_pair(h,make_pair(s,e)));
        }
        
    }
}