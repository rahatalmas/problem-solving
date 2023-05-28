//author rahatalmas
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll min = a >= b ? b : a;
        //cout << small << endl;
        if(min >= (abs(a-b))){
            if((a+b) % 3 == 0){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }else{
            cout << "NO\n";
        }
    }
}