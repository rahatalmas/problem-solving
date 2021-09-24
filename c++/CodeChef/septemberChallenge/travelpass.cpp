#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        ll z=0,o=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                z++;
            }else{
                o++;
            }
        }
        cout<<(o*b)+(z*a)<<endl;
    }
}