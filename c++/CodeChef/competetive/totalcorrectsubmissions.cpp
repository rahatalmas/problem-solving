#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ump unordered_map 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll totalp=n*3;
        string s;
        ll p;
        unordered_map<string,ll>count;
        vector<ll>v;
        while(totalp-->0){
            cin>>s;
            cin>>p;
            count[s]+=p;
        }
        for(auto x:count){
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        for(auto y:v){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}