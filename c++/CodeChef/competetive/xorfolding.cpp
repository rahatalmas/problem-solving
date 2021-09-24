#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define v vector
#define pb push_back
#define emplace_back
#define ump unordered_map
#define loop(i,a,b) for(ll i=(a);i<(b);i++)
#define loop(j,x,y) for(ll j=(x);j<(y);j++)

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll arr[n][m];
        ll count =0;
        for(auto i=0;i<n;i++){
            for(auto j=0;j<m;j++){
                char x;
                cin>>x;
                if(x=='1'){
                    count++; 
                }
            }
        }
        if(count%2==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}