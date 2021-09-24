#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define loop(i,a,b) for(ll i=(a);i<(b);i++)

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll num;
        cin>>num;
        vector<ll>v;
        while(num >0){
            ll r=num%10;
            if(v.empty()){
                if(r!=0){
                    v.pb(r);
                }
            }else{
                v.pb(r);
            }
            num=num/10;
        }
        for(auto x:v){
            cout<<x;
        }
        cout<<endl;
    }
}