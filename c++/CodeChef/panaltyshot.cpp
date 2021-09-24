#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        vector<ll>v(10);
        for(int i=0;i<10;i++){
            cin>>v[i];
        }
        ll team1=0;
        ll team2=0;
        for(int i=0;i<10;i++){
            if( (i+1)%2==0){
                team2+=v[i];
            }else{
                team1+=v[i];
            }
        }
        if(team1>team2){
            cout<<1<<endl;
        }else if(team1<team2){
            cout<<2<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}