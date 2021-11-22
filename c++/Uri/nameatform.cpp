#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    while(s.length()==0){
        getline(cin,s);
    }
    int len = s.length();
    if(len>80){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    //cout<<len<<endl;
}