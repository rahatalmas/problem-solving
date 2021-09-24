#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ump unordered_map

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll count = 0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        for(ll i=0;i<n;i++){
            if(v[i]== 1 || v[i]== 2 || v[i]==3 ||v[i]==4 || v[i] ==5 || v[i] == 6 || v[i] ==7 ){
                count++;
                if(count == 7){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}