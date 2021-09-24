#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int fact(int num){
    if(num==1){
        return 1;
    }
    return num*fact(num-1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
       int num;
       cin>>num;
       int result = fact(num);
       cout<<result<<endl;
    }
}