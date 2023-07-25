#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int hq = 0;
        int winner = 0;
        for(int i=0;i<n;i++){
            int a,b;
            cin >> a >> b;
            if(a <= 10){
                if(hq < b){
                    hq = b;
                    winner = i+1;
                    
                }
            }
        }
        cout << winner << endl;
    }
}