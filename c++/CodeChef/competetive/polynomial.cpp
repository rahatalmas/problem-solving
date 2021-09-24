#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
        ll n,q;
        cin>>n>>q;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<q;i++){
            ll x;
            cin>>x;
            ll p = lower_bound(a,a+n,x)-a;
            if(p <n && a[p] == x){
                cout<<0<<endl;
            }
            else if(p%2==0){
                cout<<"POSITIVE"<<endl;
            }else{
                cout<<"NEGATIVE"<<endl;
            }
        }
    }