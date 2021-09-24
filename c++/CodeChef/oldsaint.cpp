#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin>>t;
    while(t--){
        vector<ll>v(3);
        vector<ll>v1(3);
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        for(int i=0;i<3;i++){
            cin>>v1[i];
        }
        bool flag=true;
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(int i=0;i<3;i++){
            if(v[i]!=v1[i]){
                flag=false;
                cout<<"Fail"<<endl;
                break;
            }
        }
        if(flag==true){
            cout<<"Pass"<<endl;
        }
    }
}