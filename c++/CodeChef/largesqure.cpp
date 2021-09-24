#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int root = sqrt(n);
        for(int i=root;i>=1;i--){
            if(i*i<=n){
                cout<<i*a<<endl;
                break;
            }
        }
    }
}