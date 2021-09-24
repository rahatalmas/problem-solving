#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll findLast(ll num){
 while(num>=10){
            num = num/10;
    }
  return num;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll num;
        cin>>num;
        ll first = findLast(num);
        ll last = num%10;
        cout<<first+last<<endl;
    }
}