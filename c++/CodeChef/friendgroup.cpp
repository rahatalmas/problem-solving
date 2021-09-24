#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll>p;
        for(int i=0;i<s.size();i++){
            if(s[i]==1){
                p.push_back(i+1);
            }
        }
        ll group=1;
        for(int i=0;i<p.size();i++){
            if( (p[i]-p[i+1])-1>0 && (p[i]-p[i-1])>0){
                 group++;
            }
        }
        cout<<group<<endl;
    }
}