#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        string :: iterator it,it2;
        it=a.begin();
        it2 = a.begin()+1;
        string sub2= a.substr(1);
        string sub1=a.substr(0,1);
        string one = "1";
        string two ="0";
        if(*it != '1'){
            cout<<one+a<<endl;
        }else{
            cout<<sub1+two+sub2<<endl;
        }
    }
}