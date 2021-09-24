#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        ll totaltime = 2*(180+n);
        ll totalplay = (a+b);
        cout<<totaltime-totalplay<<endl;
    }
}