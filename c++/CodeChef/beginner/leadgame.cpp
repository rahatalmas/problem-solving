#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define eb emplace_back

int main(){
    ll n;
    cin>>n;
    ll a,b;
    ll m1=0;
    ll m2=0;
    while(n--){
        cin>>a>>b;

        if(a>b){
            m1=max(m1,(a-b));
        }
        if(b>a){
            m2=max(m2,(b-a));
        }
    }
    if(m1>m2){
        cout<<1<<" "<<m1<<endl;
    }else{
        cout<<2<<" "<<m2<<endl;
    }
        
}