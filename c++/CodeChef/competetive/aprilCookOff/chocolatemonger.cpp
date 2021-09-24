#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll tc,g;
        cin>>tc>>g;
        std::set<ll>st; ;
        for(ll i=0;i<tc;i++){
            ll type;
            cin>>type;
            st.insert(type);
        }
        ll count = st.size();
        if((tc-g)<=count){
            cout<<tc-g<<endl;
        }else{
            cout<<count<<endl;
        }
        //or cout<<min(tc-g,count)
    }
}