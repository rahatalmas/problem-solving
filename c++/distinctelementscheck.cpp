#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        set<int>s(v.begin(),v.end());
/*         for(auto x:v){
            s.insert(x);
        } */
        if(s.size() == v.size()){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }
    }
    return EXIT_SUCCESS;
}