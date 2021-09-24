#include<bits/stdc++.h>
#define ll long long int 
int main(){
    ll t;
    std::cin>>t;
    while(t--){
        ll g,v;
        std::cin>>g>>v;
        ll h = (v*v)/(2*g);
        std::cout<<h<<std::endl;
    }
}