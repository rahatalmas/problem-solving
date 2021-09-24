#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    vector<ll>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<endl;
    }
}