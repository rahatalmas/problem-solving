#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        double len = s.size();
        double ans = len/100;
        cout<<fixed<<setprecision(2);
        cout<<ans<<endl;
    }
}