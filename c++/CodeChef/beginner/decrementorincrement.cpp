#include<bits/stdc++.h>
#define ll long long int 
#define out std::cout
#define in std::cin
#define nl std::endl 

int main(){
    ll n;
    in>>n;
    if(n%4==0){
        out<<n+1<<nl;
    }else{
        out<<n-1<<nl;
    }
}