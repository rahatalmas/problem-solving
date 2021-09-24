#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool ans = false;
        int n = s.length();
        if(n>3){
            ans = (s[0]=='<' and s[1]=='/' and s[n-1]=='>');
            for(int i=2;i<n-1;i++){
                if(!(islower(s[i])) or (isdigit(s[i]))){
                    ans=false;
                }
            }
        }
        if(ans){
            cout<<"Success"<<endl;
        }else{
            cout<<"Error"<<endl;
        }
    }
}