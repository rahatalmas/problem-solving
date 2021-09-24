#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll num;
        ll count=0;
        cin>>num;
        while(num>0){
            if(num%10 == 4){
                count++;
            }
            num = num/10;
        }
        cout<<count<<endl;
    }
}