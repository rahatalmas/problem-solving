#include<bits/stdc++.h>
using namespace std;
#define ll long long int; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int u,v;
        cin>>u>>v;
        int x = ((-u*u)/(-u+v));
        int y = ((-v*v)/(-v+u));
        cout<<x<<" "<<y<<endl;
    }
}