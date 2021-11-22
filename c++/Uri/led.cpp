#include <iostream>
#include<bits/stdc++.h>

using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    while(n--){
        int ans=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
             if(s[i]=='2' || s[i]=='3' || s[i]=='5'){
                 ans+=5;
             }else if(s[i]=='0' || s[i]=='6' || s[i]=='9'){
                 ans+=6;
             }else if(s[i]=='4' || s[i]=='7'){
                 ans+=4;
             }else if(s[i]=='1'){
                 ans+=2;
             }else if(s[i]=='8'){
                 ans+=7;
             }
        }
    cout<<ans<<" leds"<<endl;
    }
    return 0;
}