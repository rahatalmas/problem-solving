#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool flag = true;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
                flag = false;
                break;
            }
        }
        
    }
}