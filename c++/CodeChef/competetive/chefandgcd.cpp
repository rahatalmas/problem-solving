#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll count=0;
        bool flag = true;
        if(__gcd(x,y)>1){
            flag = false;
            cout<<0<<endl;
        }
        while(flag){
            count++;
            x++;
            ll g=__gcd(x,y);
            if(g>1){
                cout<<count<<endl;
                flag = false;
            }else{
                x--;
                y++;
                ll g2=__gcd(x,y);
                if(g2>1){
                    cout<<count<<endl;
                    flag = false;
                }
            }
        }
    }
}