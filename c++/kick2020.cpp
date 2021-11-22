#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    ll tc = 0;
    while(t--){
        ll n,k,s;
        cin>>n>>k>>s;
        ll restart = (k-1)+(n+1);
        ll fromprevstart = (k-1)+(k-s)+(n-s)+1;
        cout<<"Case #"<<++tc<<": "<<min(restart,fromprevstart)<<endl;
    }
}