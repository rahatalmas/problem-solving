#include<bits/stdc++.h>
#define ll long long int 
int main(){
    ll t;
    std::cin>>t;
    while(t--){
        ll d,x,y,z;
        std::cin>>d>>x>>y>>z;
        ll st1 = (7*x);
        ll st2 = (d*y)+((7-d)*z);
        std::cout<<std::max(st1,st2)<<std::endl;
    }
}