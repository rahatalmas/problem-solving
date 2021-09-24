#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll e,k;
        ll sum=0;
        cin>>e>>k;
        if(e<k){
            cout<<1<<endl;
        }else{
            while(e>0){
               e = e/k;
                sum++;
            }
            cout<<sum<<endl;
        }
    }
    
}