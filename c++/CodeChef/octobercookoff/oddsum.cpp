#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       if(n==1){
            cout<<1<<endl;
       }else{
            ll alleven = (n-2);
            ll answer = alleven*(alleven+1)+1;
            cout<<answer<<endl;
       }
    }
}