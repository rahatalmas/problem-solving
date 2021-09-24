#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll num;
        ll sum=0;
        cin>>num;
        while(num>0){
            sum+=num%10;
            num = num/10;
        }
        cout<<sum<<endl;
    }
}